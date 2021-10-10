import tensorflow as tf
from tensorflow.keras import datasets, layers, models, preprocessing
import matplotlib.pyplot as plt
import numpy as np
from random import choices
import random
import json
from pathlib import Path
import os
from tensorflow.python.framework.convert_to_constants import convert_variables_to_constants_v2
from tensorflow.keras.applications.vgg16 import preprocess_input

historiesDir = './histories'
Path(historiesDir).mkdir(parents=True, exist_ok=True)

def decode(preds):
    ##stark inspiriert an der methode tf.keras.applications.vgg16.decode_predictions(preds, top=5)
    results = []
    for pred in preds:
        top_indices = pred.argsort()[-1:][::-1]
        result = [tuple(str(i)) + (pred[i],) for i in top_indices]
        results.append(result)
    return results[0][0]

##############################CREATE MODEL############################
vgg = tf.keras.applications.vgg16.VGG16(weights="imagenet", include_top=False, input_shape=(224, 224, 3))

flatten = layers.Flatten()
dense1 = layers.Dense(units=1024, activation="relu", name='fc1')
drop1 = layers.Dropout(0.5, name="drop1")
dense2 = layers.Dense(units=1024, activation="relu", name='fc2')
drop2 = layers.Dropout(0.5, name="drop2")
fc = layers.Dense(units=5, activation="softmax", name='fc3')  # -> five classes, changes classes if neccessary

inp = vgg.input
out = fc(drop2(dense2(drop1(dense1(flatten(vgg.output))))))

woundnet = tf.keras.Model(inp, out)

wound1 = models.clone_model(woundnet)
wound1._name = 'wound1'
wound2 = models.clone_model(woundnet)
wound2._name = 'wound2'
wound3 = models.clone_model(woundnet)
wound3._name = 'wound3'

for layer in wound1.layers[:6]:
    layer.trainable = False

for layer in wound2.layers[:10]:
    layer.trainable = False

for layer in wound3.layers[:14]:
    layer.trainable = False



##################################LOAD DATA#########################################################

img_height = 224
img_width = 224

train_ds = tf.keras.preprocessing.image_dataset_from_directory('./images/train', label_mode='categorical',
                                                               class_names=['eiternd', 'entzuendet','Gesunde Haut', 'nekrotisch', 'ohne Kategorie'],
                                                               image_size=(img_height, img_width), shuffle=True,
                                                               batch_size=32)

val_ds = tf.keras.preprocessing.image_dataset_from_directory('./images/val', label_mode='categorical',
                                                             class_names=['eiternd', 'entzuendet','Gesunde Haut', 'nekrotisch', 'ohne Kategorie'],
                                                             image_size=(img_height, img_width), shuffle=True,
                                                             batch_size=32)


nz_ds_train = train_ds.map(lambda x, y: (preprocess_input(x), y))
nz_ds_val = val_ds.map(lambda x, y: (preprocess_input(x), y))

val_batches = tf.data.experimental.cardinality(val_ds)
test_ds = nz_ds_val.take(val_batches // 2)
nz_ds_val = nz_ds_val.skip(val_batches // 2)

print('Number of validation batches: %d' % tf.data.experimental.cardinality(val_ds))
print('Number of test batches: %d' % tf.data.experimental.cardinality(test_ds))
print('Number of training batches: %d' % tf.data.experimental.cardinality(train_ds))

AUTOTUNE = tf.data.AUTOTUNE

nz_ds_train = nz_ds_train.prefetch(buffer_size=AUTOTUNE)
nz_ds_val = nz_ds_val.prefetch(buffer_size=AUTOTUNE)
test_ds = test_ds.prefetch(buffer_size=AUTOTUNE)

##################################START LEARNING####################################################

wound1.compile(optimizer=tf.keras.optimizers.Adam(learning_rate=0.001), loss=tf.keras.losses.categorical_crossentropy, metrics=['accuracy'])
history11 = wound1.fit(nz_ds_train, validation_data=nz_ds_val, epochs=30, batch_size=32)
history11_dict = history11.history
json.dump(history11_dict, open('{}/{}'.format(historiesDir, 'history11'), 'w'))

wound1.compile(optimizer=tf.keras.optimizers.SGD(learning_rate=0.0001), loss=tf.keras.losses.categorical_crossentropy, metrics=['accuracy'])
history12 = wound1.fit(nz_ds_train, validation_data=nz_ds_val, epochs=50, batch_size=32)
history12_dict = history12.history
json.dump(history12_dict, open('{}/{}'.format(historiesDir, 'history12'), 'w'))

w1path = './models/wound1'
Path(w1path).mkdir(parents=True, exist_ok=True)
wound1.save(w1path)

wound2.compile(optimizer=tf.keras.optimizers.Adam(learning_rate=0.001), loss=tf.keras.losses.categorical_crossentropy, metrics=['accuracy'])
history21 = wound2.fit(nz_ds_train, validation_data=nz_ds_val, epochs=30, batch_size=32)
history21_dict = history21.history
json.dump(history21_dict, open('{}/{}'.format(historiesDir, 'history21'), 'w'))

wound2.compile(optimizer=tf.keras.optimizers.SGD(learning_rate=0.0001), loss=tf.keras.losses.categorical_crossentropy, metrics=['accuracy'])
history22 = wound2.fit(nz_ds_train, validation_data=nz_ds_val, epochs=50, batch_size=32)
history22_dict = history22.history
json.dump(history22_dict, open('{}/{}'.format(historiesDir, 'history22'), 'w'))

w2path = './models/wound2'
Path(w2path).mkdir(parents=True, exist_ok=True)
wound2.save(w2path)

wound3.compile(optimizer=tf.keras.optimizers.Adam(learning_rate=0.001), loss=tf.keras.losses.categorical_crossentropy, metrics=['accuracy'])
history31 = wound3.fit(nz_ds_train, validation_data=nz_ds_val, epochs=30, batch_size=32)
history31_dict = history31.history
json.dump(history31_dict, open('{}/{}'.format(historiesDir, 'history31'), 'w'))

wound3.compile(optimizer=tf.keras.optimizers.SGD(learning_rate=0.0001), loss=tf.keras.losses.categorical_crossentropy, metrics=['accuracy'])
history32 = wound3.fit(nz_ds_train, validation_data=nz_ds_val, epochs=50, batch_size=32)
history32_dict = history32.history
json.dump(history32_dict, open('{}/{}'.format(historiesDir, 'history32'), 'w'))

w3path = './models/wound3'
Path(w3path).mkdir(parents=True, exist_ok=True)
wound3.save(w3path)


#####################################TESTING, NOT THE MODEL BUT MY CODE#############################################################
#wound1.compile(optimizer=tf.keras.optimizers.Adam(learning_rate=0.1), loss=tf.keras.losses.BinaryCrossentropy(), metrics=['accuracy'])
#history3 = wound1.fit(train_ds, validation_data=val_ds, epochs=5, batch_size=64)
#history3_dict = history3.history
#json.dump(history3_dict, open('{}\\{}'.format(historiesDir, 'history3'), 'w'))


############################exportieren des Models##########################################

inputs = tf.keras.Input(shape=(224, 224, 3))
y1 = wound1(inputs)
y2 = wound2(inputs)
y3 = wound3(inputs)
outputs = layers.average([y1, y2, y3])
deepwound = tf.keras.Model(inputs=inputs, outputs=outputs)



###save test dataset for later tests
test_path = './dataset/saved'
tf.data.experimental.save(test_ds, test_path)
##save deepwound

path = './models/deepwound'
Path(path).mkdir(parents=True, exist_ok=True)
deepwound.save(path)


# for opencv
pb_model_path = "./models/opencv/"
pb_model_name = "deepwound.pb"
os.makedirs(pb_model_path, exist_ok=True)
tf_model_graph = tf.function(lambda x: deepwound(x))
tf_model_graph = tf_model_graph.get_concrete_function(
    tf.TensorSpec(vgg.inputs[0].shape, vgg.inputs[0].dtype))
frozen_tf_func = convert_variables_to_constants_v2(tf_model_graph)
frozen_tf_func.graph.as_graph_def()
tf.io.write_graph(graph_or_graph_def=frozen_tf_func.graph,
                  logdir=pb_model_path,
                  name=pb_model_name,
                  as_text=False)
