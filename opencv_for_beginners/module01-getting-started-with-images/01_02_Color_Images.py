import cv2
import numpy as np

# Read the JPG image in normal mode.
logo = 'facebook_logo.jpg'
logo_img = cv2.imread(logo, cv2.IMREAD_COLOR)

# Print the size of the JPG image.
print("JPG Image size is ", logo_img.shape)

# Display JPG image.
cv2.imshow('JPG loaded in Normal mode', logo_img)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Read the PNG image in normal mode.
logo = 'Pytorch_logo.png'
logo_img = cv2.imread(logo, cv2.IMREAD_COLOR)

# Print the size of the PNG image.
print("PNG Image size is ", logo_img.shape)

# Display PNG image loaded in normal mode.
cv2.imshow('PNG loaded in Normal mode', logo_img)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Read PNG image as it is.
logo = "Pytorch_logo.png"
logo_img = cv2.imread(logo, cv2.IMREAD_UNCHANGED)

# Print the size of the image.
print("PNG Image size after loading in unchanged mode is ", logo_img.shape)

# Splitting and Merging channels.

# Split the image into the B,G,R components.
img_bgr = cv2.imread('Emerald_Lakes_New_Zealand_scr.jpg', cv2.IMREAD_COLOR)
b, g, r = cv2.split(img_bgr)

# Diaplay original.
cv2.imshow('Orginal Image RGB', img_bgr)
cv2.waitKey(0)
cv2.destroyAllWindows()


# Display RGB channels.
cv2.imshow('Red Channel', r)
cv2.imshow('Blue Channel', b)
cv2.imshow('Green Channel', g)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Changing to HSV color space.
img_hsv = cv2.cvtColor(img_bgr, cv2.COLOR_BGR2HSV)

# Split the image into the B,G,R components.
h, s, v = cv2.split(img_hsv)

# Display HSV channels.
cv2.imshow('Hue Channel', h)
cv2.imshow('Saturation Channel', s)
cv2.imshow('Value Channel', v)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Modifying individual color channel and saving.
# Merging.

h_new = h + 10
img_hsv_merged = cv2.merge((h_new, s, v))
img_rgb_merged = cv2.cvtColor(img_hsv_merged, cv2.COLOR_HSV2RGB)

# Display modified HSV channels.
cv2.imshow('Modified Hue Channel', h_new)
cv2.imshow('Saturation Channel', s)
cv2.imshow('Value Channel', v)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Display modified image and save.
cv2.imshow('Modified Image', img_rgb_merged)
cv2.imwrite('Modified-image.jpg', img_rgb_merged)
cv2.waitKey(0)
cv2.destroyAllWindows()
