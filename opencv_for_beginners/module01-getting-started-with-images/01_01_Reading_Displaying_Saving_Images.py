import cv2
import numpy as np

# Read image as grayscale.
bw_img = cv2.imread('img_bw_18x18.png', cv2.IMREAD_GRAYSCALE)

# Print the image data (pixel values) of a 2D NumPy array.
# Each pixel value is 8-bits in the range [0, 255].
print(bw_img)

# Print the size of image.
print('Image size is ', bw_img.shape)

# Print data-type of image.
print('Data type of image is ', bw_img.dtype)

# Display bw_img.
cv2.imshow('Image', bw_img)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Read another image as grayscale.
MNIST_3_img = cv2.imread('MNIST_3_18x18.png', cv2.IMREAD_GRAYSCALE)

# Print image matrix data of MNIST_3_img
print(MNIST_3_img)

# Display MNIST_3_img.
cv2.imshow('Image', MNIST_3_img)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Read another image and save it in PNG format.
image = cv2.imread('Apollo-8-launch.jpg')


# Display and write image in png format.
cv2.imshow('Image', image)
cv2.imwrite('Apollo-8-launch.png', image)
cv2.waitKey(0)
cv2.destroyAllWindows()

