#img > input.txt | python pathy.py
import numpy as np
import cv2, sys, math, codecs, time

def buoys(img):
    lower = np.array([200,240,240])
    upper = np.array([255, 255, 255])
    mask = cv2.inRange(img, lower, upper)

img = cv2.imread("Dice\ Pics/dice_1.jpg")    
cv2.imshow("image", img)
