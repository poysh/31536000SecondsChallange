import cv2
import numpy as np

# Read image as grayscale.
mnist_3_img = cv2.imread('MNIST_3_18x18.png', cv2.IMREAD_GRAYSCALE)

# Display the image.
cv2.imshow('Image', mnist_3_img)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Access individual pixels.
print(mnist_3_img[3, 10])
print(mnist_3_img[12, 2])
print(mnist_3_img[10, 12])

# Modify image pixels.
# Make a copy of the original image.
mnist_3_img_copy = mnist_3_img.copy()

# Modify four pixels.
mnist_3_img_copy[2, 2] = 100
mnist_3_img_copy[2, 3] = 125
mnist_3_img_copy[3, 2] = 150
mnist_3_img_copy[3, 3] = 175

# Use numPy array slicing to modify a group of pixels.
mnist_3_img_copy[0:17,16] = 150

# Print the image data.
print('Modified Image data', mnist_3_img_copy)

# Display the modified image.
cv2.imshow('Modified Image', mnist_3_img_copy)
cv2.waitKey(0)
cv2.destroyAllWindows()


# Cropping Image.
img_eagle = cv2.imread('Eagle_in_Flight.jpg', cv2.IMREAD_COLOR)
cv2.imshow('Eagle', img_eagle)
cropped_region = img_eagle[20:420, 150:600]
cv2.imshow('Eagle cropped', cropped_region)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Resizing Image by specifying scaling factor.
resized_cropped_region_2x = cv2.resize(cropped_region, None, fx = 2, fy = 2)

# Display the resized image.
cv2.imshow('2x Resized cropped', resized_cropped_region_2x)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Resizing the Image by specifying exact size of the output image.
# Set the desired size of the image.
desired_width = 400
desired_height = 200
dim = (desired_width, desired_height)

# Resize the image.
resized_cropped_region = cv2.resize(cropped_region, dsize = dim, interpolation = cv2.INTER_AREA)

# Display.
cv2.imshow('Resized with specific size', resized_cropped_region)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Resizing dimesnsion while maintaining aspect ratio.
# Method 2: Using 'dsize'.
desired_width = 200
aspect_ratio = cropped_region.shape[0] / cropped_region.shape[1]
desired_height = int(desired_width * aspect_ratio)
dim = (desired_width, desired_height)

# Resize the image.
resized_cropped_region = cv2.resize(cropped_region, dsize = dim, interpolation = cv2.INTER_AREA)
cv2.imshow('Resizing with preserved aspect ratio',resized_cropped_region)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Flipping Image.
# Flip the image three ways.
img_eagle_flipped_horz = cv2.flip(img_eagle, 1)
img_eagle_flipped_vert = cv2.flip(img_eagle, 0)
img_eagle_flipped_both = cv2.flip(img_eagle, -1)

# Display.
cv2.imshow('Orginal', img_eagle)
cv2.imshow('Horizontal flip', img_eagle_flipped_horz)
cv2.imshow('Vertical flip', img_eagle_flipped_vert)
cv2.imshow('Both flip', img_eagle_flipped_both)
cv2.waitKey(0)
cv2.destroyAllWindows()