import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

# Load the dataset
file_path = "your_dataset.csv"  # Change this to your CSV file path
df = pd.read_csv(file_path)

# Display basic information
print("Dataset Info:")
print(df.info())

# Check for missing values
print("\nMissing Values:")
print(df.isnull().sum())

# Check for duplicates
print("\nDuplicate Rows:", df.duplicated().sum())

# Display basic statistics
print("\nStatistical Summary:")
print(df.describe())

# Correlation matrix
print("\nCorrelation Matrix:")
print(df.corr())

# Plot histogram of numerical features
df.hist(figsize=(10, 8), bins=30)
plt.suptitle("Histogram of Numerical Features")
plt.show()

# Plot heatmap for correlation
plt.figure(figsize=(10, 6))
sns.heatmap(df.corr(), annot=True, cmap="coolwarm", fmt=".2f")
plt.title("Correlation Heatmap")
plt.show()
