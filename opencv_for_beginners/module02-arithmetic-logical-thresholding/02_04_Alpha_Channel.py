import cv2
import numpy as np

# Read the PNG image using: cv2.IMREAD_UNCHANGED to retain the alpha channel.
img = cv2.imread('opencv_logo-scr.png', cv2.IMREAD_UNCHANGED)

print(img.shape)

# Split the channels.
b, g, r, a = cv2.split(img)

# Display.
cv2.imshow('Blue', b)
cv2.imshow('Green', g)
cv2.imshow('Red', r)
cv2.imshow('Alpha', a)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Create a PNG transparent file from a JPG file.
# Read the original and modified JPG images of the kangaroo sign.
img_kang_org = cv2.imread('kangaroo.jpg',cv2.IMREAD_COLOR)
img_kang     = cv2.imread('kangaroo_sign_with_green_marker.jpg',cv2.IMREAD_COLOR)

# For reference: Code used to add light green marker to original image of the kangaroo sign.
# img_kang_org[80:120,80:120,0] = 220
# img_kang_org[80:120,80:120,1] = 255
# img_kang_org[80:120,80:120,2] = 220
# cv2.imwrite('kangaroo_sign_with_green_marker.jpg', img_kang_org).

# Print the image shapes to verify the channels.
print('Shape of the color image:     ', img_kang.shape)

# Convert the image to gray scale.
img_kang_gray = cv2.cvtColor(img_kang, cv2.COLOR_BGR2GRAY)

# Display.
cv2.imshow('Original', img_kang_org)
cv2.imshow('Original with Green marker', img_kang)
cv2.imshow('Grayscale', img_kang_gray)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Create binary mask.
ret1, thresh1 = cv2.threshold(img_kang_gray, 150, 255, cv2.THRESH_BINARY)
ret2, thresh2 = cv2.threshold(img_kang_gray, 230, 255, cv2.THRESH_BINARY)
ret3, thresh3 = cv2.threshold(img_kang_gray, 230, 200, cv2.THRESH_BINARY)  # Note max value of mask is set to 200

kang_inv_mask_full = cv2.bitwise_not(thresh2)  # Fully transparent
kang_inv_mask_semi = cv2.bitwise_not(thresh3)  # Semi-transparent (due to max value of thresh3 = 200)

# Print the pixel itensity of the inverted binary masks at the location (100,100).
print('Inverse Mask (full) at (100,100): ', kang_inv_mask_full[100,100])
print('Inverse Mask (semi) at (100,100): ', kang_inv_mask_semi[100,100])

# Display.
cv2.imshow('Thresh = 150', thresh1)
cv2.imshow('Thresh = 230', thresh2)
cv2.imshow('Thresh = 230, Max = 200', thresh3)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Display masks.
cv2.imshow('Fully transparent Mask', kang_inv_mask_full)
cv2.imshow('Semi transparent Mask', kang_inv_mask_semi)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Add alpha channel to the image to get fully transparent BG.
# Split the color channels from the original image.
bk, gk, rk = cv2.split(img_kang)

# Add the "mask" as the 4th channel.
mat = [bk, gk, rk, kang_inv_mask_full]

# Use the merge() function to create a single multi-channel array.
kangaroo_transparent = cv2.merge(mat)

# Save the transparent image as a PNG file to preserve the alpha channel.
cv2.imwrite('kangaroo_alpha_full.png', kangaroo_transparent)

# Add alpha channel to the image to get semi transparent BG.
# Add the "mask" as the 4th channel.
mat = [bk, gk, rk, kang_inv_mask_semi]

# Use the merge() function to create a single multi-channel array.
kangaroo_semi = cv2.merge(mat)

# Save the transparent image as a PNG file to preserve the alpha channel.
cv2.imwrite('kangaroo_alpha_semi.png', kangaroo_semi)

# Inspect the channels.
# Read the PNG image using: cv2.IMREAD_UNCHANGED to retain the alpha channel.
img = cv2.imread('kangaroo_alpha_full.png', cv2.IMREAD_UNCHANGED)

# Split the channels.
b, g, r, a = cv2.split(img)

# Display.
cv2.imshow('Blue', b)
cv2.imshow('Green', g)
cv2.imshow('Red', r)
cv2.imshow('Alpha', a)
cv2.waitKey(0)
cv2.destroyAllWindows()