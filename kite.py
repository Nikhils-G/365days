import pygame
import math

# Initialize pygame
pygame.init()

# Set the screen dimensions
screen_width = 800
screen_height = 600
screen = pygame.display.set_mode((screen_width, screen_height))

# Set the title of the window
pygame.display.set_caption("Flying Kite Animation")

# Define colors
WHITE = (255, 255, 255)
BLUE = (0, 0, 255)
RED = (255, 0, 0)
YELLOW = (255, 255, 0)

# Kite properties
kite_width = 60
kite_height = 100
kite_position = [screen_width // 2, screen_height // 2]

# Kite movement settings
kite_speed = 5
angle = 0

# Game loop flag
running = True
clock = pygame.time.Clock()

# Function to draw the kite
def draw_kite(x, y, angle):
    # Rotating the kite's shape
    kite_surface = pygame.Surface((kite_width, kite_height), pygame.SRCALPHA)
    pygame.draw.polygon(kite_surface, BLUE, [(0, kite_height), (kite_width // 2, 0), (kite_width, kite_height), (kite_width // 2, kite_height // 2)])
    
    # Create the rotated kite surface
    rotated_kite = pygame.transform.rotate(kite_surface, angle)
    rect = rotated_kite.get_rect(center=(x, y))
    screen.blit(rotated_kite, rect.topleft)
    
    # Kite tail (line)
    tail_length = 150
    tail_x = x
    tail_y = y + kite_height // 2 + tail_length // 2
    pygame.draw.line(screen, YELLOW, (x, y + kite_height // 2), (tail_x, tail_y), 5)

# Main game loop
while running:
    screen.fill(WHITE)  # Fill the screen with white background
    
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
    
    # Move the kite in a circular path
    angle += 1
    kite_position[0] += int(kite_speed * math.cos(math.radians(angle)))
    kite_position[1] += int(kite_speed * math.sin(math.radians(angle)))

    if kite_position[0] > screen_width:
        kite_position[0] = 0
    if kite_position[1] > screen_height:
        kite_position[1] = 0
    if kite_position[0] < 0:
        kite_position[0] = screen_width
    if kite_position[1] < 0:
        kite_position[1] = screen_height

    # Draw the kite
    draw_kite(kite_position[0], kite_position[1], angle)
    
    pygame.display.update()  # Update the screen
    clock.tick(60)  # Limit the frame rate to 60 frames per second

# Quit pygame when done
pygame.quit()
