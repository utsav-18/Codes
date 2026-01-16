word = "Dunkey"

with open("dunkey.txt","r") as f:
    content = f.read()

contentNew = content.replace(word,"######")

with open("dunkey.txt","w") as f:
    f.write(contentNew)
    