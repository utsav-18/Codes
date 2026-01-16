import statistics
data = [12,15,14,10,18,12,14,15,15,20]

print("Mean:", statistics.mean(data))
print("Median:", statistics.median(data))

mode_value = statistics.mode(data)
print("Mode:", mode_value)