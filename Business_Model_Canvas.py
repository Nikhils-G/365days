import matplotlib.pyplot as plt
from matplotlib.patches import Rectangle

# Define sections of the BMC
sections = {
    "Key Partners": (0, 2, 2, 2),
    "Key Activities": (2, 2, 2, 2),
    "Value Propositions": (4, 2, 4, 2),
    "Customer Relationships": (8, 2, 2, 2),
    "Customer Segments": (10, 2, 2, 2),
    "Key Resources": (0, 0, 2, 2),
    "Channels": (2, 0, 6, 2),
    "Revenue Streams": (8, 0, 4, 1),
    "Cost Structure": (8, -1, 4, 1)
}

# Create a figure
fig, ax = plt.subplots(figsize=(12, 8))

# Add sections as rectangles with labels
for label, (x, y, w, h) in sections.items():
    rect = Rectangle((x, y), w, h, fill=False, edgecolor='black', linewidth=1.5)
    ax.add_patch(rect)
    ax.text(x + w/2, y + h/2, label, ha='center', va='center', fontsize=10, wrap=True)

# Set limits and remove axes
ax.set_xlim(-1, 14)
ax.set_ylim(-2, 5)
ax.axis('off')

# Title
plt.title("Business Model Canvas", fontsize=16)

# Show the plot
plt.tight_layout()
plt.show()
