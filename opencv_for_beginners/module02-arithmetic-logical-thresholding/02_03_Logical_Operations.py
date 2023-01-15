import cv2
import numpy as np

# Read and display input images.
img_rec = cv2.imread('rectangle.jpg', cv2.IMREAD_GRAYSCALE)
img_cir = cv2.imread('circle.jpg', cv2.IMREAD_GRAYSCALE)
cv2.imshow('Image 1', img_rec)
cv2.imshow('Image 2', img_cir)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Bitwise AND Operator.
result = cv2.bitwise_and(img_rec, img_cir, mask = None)
cv2.imshow('Bitwise AND', result)

# Bitwise OR Operator.
result = cv2.bitwise_or(img_rec, img_cir, mask = None)
cv2.imshow('Bitwise OR', result)

# Bitwise XOR Operator.
result = cv2.bitwise_xor(img_rec, img_cir, mask = None)
cv2.imshow('Bitwise XOR', result)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Logo Manipulation.
# Read and display the FG and BG images.
img_logo = cv2.imread('CR_Logo.png', cv2.IMREAD_COLOR)
img_background = cv2.imread('checkerboard_color.png', cv2.IMREAD_COLOR)

# Print shape.
print('Shape of the foreground image : ', img_logo.shape)
logo_h = img_logo.shape[0]
logo_w = img_logo.shape[1]

print('Shape of the background image', img_background.shape)

# Resize background image according to FG image.
# Set the dimension of the background image to be the same as the logo.
dim = (logo_w, logo_h)

# Resize the background image to the same size as logo image.
img_background = cv2.resize(img_background, dim, interpolation = cv2.INTER_AREA)

# Print the image shape to confirm it's the same size as the logo.
print('Shape of the background image after resizing : ', img_background.shape)

# Display.
cv2.imshow('Foreground', img_logo)
cv2.imshow('Background', img_background)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Create a mask from the foreground logo.
# Convert the image to grayscale.
img_logo_gray = cv2.cvtColor(img_logo, cv2.COLOR_BGR2GRAY)

# Apply global thresholding to create a binary mask of the logo.
retval, img_logo_mask = cv2.threshold(img_logo_gray, 127, 255, cv2.THRESH_BINARY)

# Print shape.
print('Shape of the Foreground mask : ', img_logo_mask.shape)

# Display.
cv2.imshow('Logo mask', img_logo_mask)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Apply the mask to the background image.
# Create colorful checkerboard background "behind" the logo lettering.
img_background = cv2.bitwise_and(img_background, img_background, mask = img_logo_mask)

# Print shape.
print('Shape of background after application of mask : ', img_background.shape)

# Display.
cv2.imshow('Masked Background', img_background)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Invert the mask.
img_logo_mask_inv = cv2.bitwise_not(img_logo_mask)

# Print shape.
print('Shape of the inverted mask : ', img_logo_mask_inv.shape)

# Display.
cv2.imshow('Inverted foreground mask', img_logo_mask_inv)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Isolate the foreground of the logo.
img_foreground = cv2.bitwise_and(img_logo, img_logo, mask = img_logo_mask_inv)

# Print shape.
print(img_foreground.shape)

# Display.
cv2.imshow('Isolated foreground', img_foreground)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Add the foreground and background.
result = cv2.add(img_background, img_foreground)

# Display.
cv2.imshow('Final Result', result)
cv2.waitKey(0)
cv2.destroyAllWindows()