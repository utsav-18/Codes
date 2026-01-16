with open("temp.txt") as f:
    c = f.read()

with open("Temprory_file.txt","w") as f:
    f.write(c)