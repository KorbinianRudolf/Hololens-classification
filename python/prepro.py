import PIL
import random
from random import choices
from PIL import Image
import cv2 as cv
import numpy as np
import os
from pathlib import Path

VAL_SPLIT = 0.2

def flip(img):
    flipCh = [PIL.Image.FLIP_LEFT_RIGHT, PIL.Image.FLIP_TOP_BOTTOM]
    ch = choices(population=flipCh, weights=[0.5, 0.5])
    return img.transpose(ch[0])


def rotate(img):
    return img.rotate(random.randint(0, 360))


def zoom(img):
    height, width = img.size
    nH = height * 0.7
    nW = width * 0.7  # zoom by 30% -> new image is 70% of original content
    left = ((width - nW) / 2)
    upper = ((height - nH) / 2)
    right = ((width - nW) / 2) + nW
    lower = ((height - nH) / 2) + nH
    cropped = img.crop((left, upper, right, lower))
    return cropped.resize((width, height))


def shift(img):
    shiftPx = 10
    direction = [(0, 0), (1, 0), (0, 1), (1, 1), (0, 0), (-1, 0), (0, -1), (-1, -1)]
    dire = choices(population=direction, weights=[0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125])
    d = dire[0]
    return PIL.ImageChops.offset(img, d[0] * shiftPx, d[1] * shiftPx)


def sheared(img):
    helpI = Image.new(img.mode, (int(img.size[0] * 1.2), img.size[1]), (0, 0, 0))
    helpI.paste(img, (int(img.size[0] * 0.2), 0))
    return helpI.transform((int(helpI.size[0]), helpI.size[1]), Image.AFFINE, (1, 0.2, 0, 0, 1, 0))


augfun = [flip, rotate, zoom, shift, sheared]


def clahe(img):
    clahe = cv.createCLAHE(clipLimit=2.0, tileGridSize=(8, 8))
    lab = cv.cvtColor(np.array(img), cv.COLOR_RGB2LAB)
    lab_parts = cv.split(lab)
    lab_parts[0] = clahe.apply(lab_parts[0])
    lab = cv.merge(lab_parts)
    rgb = cv.cvtColor(lab, cv.COLOR_LAB2RGB)
    return PIL.Image.fromarray(rgb)


def convertGif(path):
    gif = cv.VideoCapture(path)
    ret, frame = gif.read()
    rgb = cv.cvtColor(frame, cv.COLOR_BGR2RGB)
    return PIL.Image.fromarray(rgb)


def main():
    resultDir = '.\\res'
    trainDir = 'train'
    valDir = 'val'
    Path(resultDir).mkdir(parents=True, exist_ok=True)
    Path('{}\\{}'.format(resultDir, trainDir)).mkdir(parents=True, exist_ok=True)
    Path('{}\\{}'.format(resultDir, valDir)).mkdir(parents=True, exist_ok=True)
    folders = ['ohne Kategorie', 'eiternd', 'entzündet', 'nekrotisch', 'Gesunde Haut']
    #folders = ['.\\test']
    for fldr in folders:
        print(fldr)
        Path("{}\\{}\\{}".format(resultDir, trainDir, fldr)).mkdir(parents=True, exist_ok=True)
        Path("{}\\{}\\{}".format(resultDir, valDir, fldr)).mkdir(parents=True, exist_ok=True)
        imgs = [im for im in os.listdir(fldr) if os.path.isfile(os.path.join(fldr, im))]
        random.shuffle(imgs)
        splitter = int(len(imgs)*VAL_SPLIT)
        val = imgs[:splitter]
        train = imgs[splitter:]

        for image in train:
            filename, fe = os.path.splitext(image)
            if fe == '.gif':
                img = convertGif(os.path.join(fldr, image))
            else:
                img = PIL.Image.open(os.path.join(fldr, image))
            channel = img.getbands()
            if channel[0] == 'P':
                img = img.convert('RGB')
            img = img.resize((224, 224))
            img = clahe(img)
            resImgs = []
            for fun in augfun:
                resImgs.append(fun(img))
            img.save('{}\\{}\\{}\\{}.png'.format(resultDir, trainDir, fldr, filename))
            i = 1
            for rI in resImgs:
                rI.save('{}\\{}\\{}\\{}_{}.png'.format(resultDir, trainDir, fldr, filename, str(i)))
                i += 1

        for image in val:
            filename, fe = os.path.splitext(image)
            if fe == '.gif':
                img = convertGif(os.path.join(fldr, image))
            else:
                img = PIL.Image.open(os.path.join(fldr, image))
            channel = img.getbands()
            if channel[0] == 'P':
                img = img.convert('RGB')
            img = img.resize((224, 224))
            img = clahe(img)
            img.save('{}\\{}\\{}\\{}.png'.format(resultDir, valDir, fldr, filename))


if __name__ == '__main__':
    main()
