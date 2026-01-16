f = open("poem.txt")

poem = f.read()

if ('twinkle' in poem):
    print("Found")
else:
    print("Not found")

f.close() 