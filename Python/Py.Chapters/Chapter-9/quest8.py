with open("log.txt") as f:
    copy = f.read()

with open("this.txt","w") as f:
    f.write(copy)