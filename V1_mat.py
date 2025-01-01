import matplotlib.pyplot as plt

# Sample data
categories = ['A', 'B', 'C', 'D']
values = [10, 15, 7, 12]

# Line chart
plt.figure(figsize=(10, 5))
plt.plot(categories, values, marker='o', label='Line Chart', color='blue')
plt.title('Line Chart Example')
plt.xlabel('Categories')
plt.ylabel('Values')
plt.legend()
plt.grid(True)
plt.show()

# Bar chart
plt.figure(figsize=(10, 5))
plt.bar(categories, values, color='green', alpha=0.7, label='Bar Chart')
plt.title('Bar Chart Example')
plt.xlabel('Categories')
plt.ylabel('Values')
plt.legend()
plt.show()
