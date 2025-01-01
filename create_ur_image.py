from PIL import Image, ImageDraw

# Create an image with a white background
width, height = 500, 500
image = Image.new('RGB', (width, height), 'white')

# Draw a rectangle on the image
draw = ImageDraw.Draw(image)
draw.rectangle((50, 50, 450, 450), fill='blue', outline='black')

# Save the image
image.save('output_image.png')

# Display the image
image.show()
from PIL import Image, ImageDraw

# Create an image with a white background
width, height = 500, 500
image = Image.new('RGB', (width, height), 'white')

# Draw a rectangle on the image
draw = ImageDraw.Draw(image)
draw.rectangle((50, 50, 450, 450), fill='blue', outline='black')

# Save the image
image.save('output_image.png')

# Display the image
image.show()
