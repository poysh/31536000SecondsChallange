import cv2
import numpy as np

# Read and display original image.
image = 'new-zealand-lake.jpg'
img = cv2.imread(image, cv2.IMREAD_COLOR)
cv2.imshow('Image', img)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Addition-Subtraction | Change the image brightness.
# Create a matrix with constant intensity.
matrix = np.ones(img.shape, dtype = 'uint8') * 30

# Create brighter and darker images.
img_brighter = cv2.add(img, matrix)
img_darker   = cv2.subtract(img, matrix)

# Display.
cv2.imshow('Original', img)
cv2.imshow('Brighter', img_brighter)
cv2.imshow('Darker', img_darker)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Multiplication | Change image contrast.
# Create matrices with a constant scale factor.
matrix1 = np.ones(img.shape) * 0.8
matrix2 = np.ones(img.shape) * 1.2

# Create lower and higher contrast images.
img_lower  = np.uint8(cv2.multiply(np.float64(img), matrix1))
img_higher = np.uint8(cv2.multiply(np.float64(img), matrix2))

# Display.
cv2.imshow('Original', img)
cv2.imshow('Lower contrast', img_lower)
cv2.imshow('Higher contrast', img_higher)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Handling overflow using np.clip().
# Create lower and higher contrast images.
img_lower   = np.uint8(cv2.multiply(np.float64(img), matrix1))
img_higher  = np.uint8(np.clip(cv2.multiply(np.float64(img), matrix2) , 0, 255))

# Display.
cv2.imshow('Original', img)
cv2.imshow('Lower contrast', img_lower)
cv2.imshow('Higher contrast', img_higher)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Using scale option.
# Create matrices with a constant scale factor.
matrix_ones = np.ones(img.shape, dtype = 'float64')

# Create lower and higher contrast images.
img_lower   = np.uint8(cv2.multiply(np.float64(img), matrix_ones, scale = 0.8))
img_higher  = np.uint8(np.clip(cv2.multiply(np.float64(img), matrix_ones, scale = 1.2) , 0, 255))

# Display.
cv2.imshow('Original', img)
cv2.imshow('Lower contrast', img_lower)
cv2.imshow('Higher contrast', img_higher)
cv2.waitKey(0)
cv2.destroyAllWindows()