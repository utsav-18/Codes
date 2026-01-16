with open("log.txt") as f:
    lines = f.readlines()

c = 0

for line in lines:
    if 'python' in line:
        print(f"Yes python is present. Line no: {c}")
        break
    c += 1

else:
    print("No")
