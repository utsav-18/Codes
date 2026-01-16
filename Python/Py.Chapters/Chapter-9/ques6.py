with open("log.txt") as f:
    content = f.read()

if("python" in content):
    print("Yes is present")
else:
    print("python is not present")

