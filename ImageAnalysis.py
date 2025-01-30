import cv2
import numpy as np
import matplotlib.pyplot as plt

def analyze_image(image_path):
    # Load image
    image = cv2.imread(image_path)
    if image is None:
        print("Error: Image not found.")
        return
    
    # Convert to grayscale
    gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    
    # Edge detection using Canny
    edges = cv2.Canny(gray, 100, 200)
    
    # Calculate histogram for color channels
    color = ('b', 'g', 'r')
    plt.figure()
    plt.title("Color Histogram")
    for i, col in enumerate(color):
        hist = cv2.calcHist([image], [i], None, [256], [0, 256])
        plt.plot(hist, color=col)
    plt.xlim([0, 256])
    plt.show()
    
    # Show images
    cv2.imshow('Original Image', image)
    cv2.imshow('Grayscale Image', gray)
    cv2.imshow('Edge Detection', edges)
    
    cv2.waitKey(0)
    cv2.destroyAllWindows()

# Example usage
analyze_image('your_image.jpg')
