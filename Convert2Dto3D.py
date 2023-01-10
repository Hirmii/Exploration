#code to convert user given 2-D image into 3-D image
import cv2
import numpy as np
import matplotlib.pyplot as plt
import os
import sys
import glob
import math
import random
import time
import scipy
import scipy.misc
import scipy.cluster
import scipy.ndimage
import scipy.ndimage.filters
import scipy.ndimage.morphology
import scipy.ndimage.interpolation
import scipy.ndimage.measurements
import scipy.ndimage.morphology
#code to take 2-D IMAGE input from user and convert it into 3-D image
def convert2Dto3D():
    #code to take 2-D image input from user
    img = cv2.imread(r'C:\Users\DELL\Downloads\R.jpg',0)
    #code to convert 2-D image into 3-D image
    img3d = np.dstack((img, img, img))
    #code to display 3-D image
    cv2.imshow('3dimage',img3d)
    cv2.waitKey(0)
    cv2.destroyAllWindows()
    return img3d
#execution code
if __name__ == '__main__':
    convert2Dto3D()
