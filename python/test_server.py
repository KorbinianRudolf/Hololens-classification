import json
import cgi
from http.server import BaseHTTPRequestHandler, HTTPServer
from datetime import datetime
import cv2 as cv
import numpy as np
import base64
from random import seed, randint
import tensorflow as tf
from tensorflow.keras.applications.vgg16 import preprocess_input
from pathlib import Path
seed(3579)


def decode(preds):
    ##stark inspiriert an der methode tf.keras.applications.vgg16.decode_predictions(preds, top=5)
    results = []
    for pred in preds:
        top_indices = pred.argsort()[-1:][::-1]
        result = [tuple(str(i)) + (pred[i],) for i in top_indices]
        results.append(result)
    return results[0][0]

def classify(file_name):
    #TODO clahe
    img = tf.keras.preprocessing.image.load_img(
        file_name, target_size=(224, 224)
    )

    img_array = tf.keras.preprocessing.image.img_to_array(img)
    img_array = img_array.reshape((1, img_array.shape[0], img_array.shape[1], img_array.shape[2]))

    img_nz = preprocess_input(img_array)
    yhat = deep.predict(img_nz)
    print(yhat)
    return decode(yhat)

class Server(BaseHTTPRequestHandler):
    def _set_headers(self):
        self.send_response(200)
        self.send_header('Content-type', 'application/json')
        self.end_headers()

    def do_HEAD(self):
        self._set_headers()

    # GET sends back a Hello world message
    def do_GET(self):
        self._set_headers()
        now = datetime.now()
        current_time = now.strftime("%H:%M:%S")
        js = json.dumps({'time': current_time, 'received': 'ok'}).encode(encoding='utf_8')
        self.wfile.write(js)

    # POST echoes the message adding a JSON field
    def do_POST(self):
        ctype, pdict = cgi.parse_header(self.headers.get('content-type'))

        # refuse to receive non-json content
        if ctype != 'application/json':
            self.send_response(400)
            self.end_headers()
            return

        # read the message and convert it into a python dictionary
        length = int(self.headers.get('content-length'))
        message = json.loads(self.rfile.read(length))
        imgString = base64.decodebytes(message['image'].encode('utf-8'))
        #utf8_img = imgString.encode("utf-8")
        #print(type(utf8_img))
        print(message["msg"])
        nparr = np.frombuffer(imgString, np.uint8)
        image = cv.imdecode(nparr, flags=1)
        # add a property to the object, just to mess with dat

        # send the message back
        self._set_headers()
        now = datetime.now()
        current_time = now.strftime("%H:%M:%S")
        print(current_time)
        file_name = './image_void/img_{}.jpg'.format(str(randint(1, 150000000)))
        cv.imwrite(file_name, image)
        classification = classify(file_name)
        print(classification)
        js = json.dumps({'time': current_time, 'received': 'ok', 'class': int(classification[0]), 'probability': str(classification[1])}).encode(encoding='utf_8')
        self.wfile.write(js)
        #cv.imshow('image', image)

        #cv.waitKey(0)



def run(server_class=HTTPServer, handler_class=Server, port=8008):
    Path('./image_void').mkdir(parents=True, exist_ok=True)
    server_address = ('', port)
    httpd = server_class(server_address, handler_class)

    print('Starting httpd on port {}...'.format(port))
    httpd.serve_forever()


if __name__ == "__main__":
    deep = tf.keras.models.load_model('../models/deepwound')
    deep.summary()
    run()
