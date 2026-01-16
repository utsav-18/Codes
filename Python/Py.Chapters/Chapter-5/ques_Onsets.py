a = set()

for i in range(8):
    n = int(input("Enter number: "))
    a.add(n)


a.add(18)
a.add(18.0) #it will not be added
a.add("18") #it can be added

print(a)

