words = ["donkey" , "bad" ,"ganda"]

with open("dunkey.txt","r") as f:
    content = f.read()

for word in words:
    content = content.replace(word,"#" * len(word))

with open("dunkey.txt","w") as f:
    f.write(content)