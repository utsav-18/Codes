n = int(input("Enter num: "))
name = []

for i in range(n):
    s = input(f"Enter name for {i+1}:")
    name.append(s)

print(name)