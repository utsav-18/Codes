marks = []

for i in range(6):
    no = int(input(f"Marks obtained by student {i+1}: " ))
    marks.append(no)

print(marks)
marks.sort()
print(marks)
