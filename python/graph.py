import matplotlib.pyplot as plt

# 1. Define the data points (X and Y coordinates)
x = [1, 2, 3, 4, 5]
y = [2, 4, 1, 5, 3]

# 2. Create the plot with customization (color, line style, and markers)
plt.plot(x, y, color='blue', linestyle='--', marker='o', linewidth=2, label='Trend')

# 3. Add titles and labels for the axes
plt.title('Sample Line Graph', fontsize=14)
plt.xlabel('X Axis Label', fontsize=12)
plt.ylabel('Y Axis Label', fontsize=12)

# 4. Add optional grid lines and a legend
plt.grid(True, linestyle=':', alpha=0.6)
plt.legend()

# 5. Display the graph
plt.show()

