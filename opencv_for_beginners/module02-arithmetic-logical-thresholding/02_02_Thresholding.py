import cv2
import numpy as np

# Lane detection example.
# Read image in grayscale.
img = cv2.imread('road_lanes.png', cv2.IMREAD_GRAYSCALE)

# Perform binary thresholding.
retval, img_thresh = cv2.threshold(img, 165, 255, cv2.THRESH_BINARY)

# Display.
cv2.imshow('Image', img)
cv2.imshow('Thresholded', img_thresh)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Perform adaptive thresholding.
# Read the original image.
img = cv2.imread('Piano_Sheet_Music.png', cv2.IMREAD_GRAYSCALE)

# Perform global thresholding.
retval, img_thresh_gbl_1 = cv2.threshold(img, 50, 255, cv2.THRESH_BINARY)

# Perform global thresholding.
retval, img_thresh_gbl_2 = cv2.threshold(img, 130, 255, cv2.THRESH_BINARY)

# Perform adaptive thresholding.
img_thresh_adp = cv2.adaptiveThreshold(img, 255, cv2.ADAPTIVE_THRESH_MEAN_C, cv2.THRESH_BINARY, 13, 7)

# Display.
cv2.imshow('Image', img)
cv2.imshow('Thresholded Global 1', img_thresh_gbl_1)
cv2.imshow('Thresholded Global 2', img_thresh_gbl_2)
cv2.imshow('Thresholded adaptive', img_thresh_adp)
cv2.waitKey(0)
cv2.destroyAllWindows()
