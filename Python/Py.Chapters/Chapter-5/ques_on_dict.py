d = {}


for i in range(2):
    name = input("Enter name: ")
    lang = input("Enter language: ")
    d.update({name:lang})

print(d)