import cv2
import matplotlib.pyplot as plt
plt.rcParams['figure.figsize'] = (6.0, 6.0)
plt.rcParams['image.cmap'] = 'gray'

# Read and display the original signature.
sig_org = cv2.imread('signature.jpg', cv2.IMREAD_COLOR)
plt.imshow(sig_org[:,:,::-1])
plt.title('Original Sign')
plt.show()
# Press q to quit.

# Crop the signature from the original image.
sig = sig_org[700:2100, 450:3500, :]
plt.imshow(sig)
plt.title('Cropped')
plt.show()
# Press q to quit.


# Convert to Grayscale.
sig_gray = cv2.cvtColor(sig, cv2.COLOR_BGR2GRAY)
plt.imshow(sig_gray)
plt.title('Gray')
plt.show()
# Press q to quit.

# Create an Alpha Mask.
ret, alpha_mask = cv2.threshold(sig_gray, 150, 255, cv2.THRESH_BINARY_INV)
cv2.imwrite('alpha_mask.jpg', alpha_mask)
plt.imshow(alpha_mask)
plt.title('Alpha Mask')
plt.show()
# Press q to quit.

# Create a blue mask for blending.
blue_mask = sig.copy()
blue_mask[:, :] = (255, 0, 0)
plt.imshow(blue_mask[:,:,::-1])
plt.title('Blue Mask')
plt.show()
# Press q to quit.

# Blend the signature with the mask.
sig_color = cv2.addWeighted(sig, 1, blue_mask, 0.5, 0)
plt.imshow(sig_color[:,:,::-1])
plt.title('Blended')
plt.show()
# Press q to quit.


# Add the Alpha Mask as the 4th Channel to the Image.
# Split the color channels from the color image.
b, g, r = cv2.split(sig_color)
print(b.shape)
print(g.shape)
print(r.shape)

# Create a list of the four arrays with the alpha channel as the 4th member. These are four separate 2D arrays.
new = [b, g, r, alpha_mask]

# Use the merge() function to create a single, multi-channel array.
png = cv2.merge(new, 4)

# Save the transparent signature a PNG file to retain the alpha channel.
cv2.imwrite('extracted_sig.png', png)
