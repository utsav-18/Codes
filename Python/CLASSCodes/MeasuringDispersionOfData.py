import statistics as stats
import numpy as np

data = [12, 15, 14, 10, 18, 12, 14, 15, 15, 20]

#Range
data_range = max(data) - min(data)

#Variance
variance_value = stats.variance(data)

#Standard Deviation
std_dev = stats.stdev(data)

#interquartile range
q3 = np.percentile(data, 75)
q1 = np.percentile(data, 25)
iqr = q3 - q1


print("Range:", data_range)
print("Variance:", variance_value)
print("Standard Deviation:", std_dev)
print("Interquartile Range:", iqr)  

