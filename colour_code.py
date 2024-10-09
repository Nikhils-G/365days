from PIL import Image

# Open the image to extract the color
image_path = '/mnt/data/n.png'
image = Image.open(image_path)

# Get the most dominant color in the image
dominant_color = image.getpixel((0, 0))
dominant_color
