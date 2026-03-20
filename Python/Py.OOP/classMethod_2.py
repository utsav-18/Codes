class Person:
    name = "anonymous"

    @classmethod
    def changeName(cls,name):
        cls.name = name

p1 = Person()
print(p1.name)
p1.changeName("Utsav Raj")
print(p1.name)

print(Person.name) # fully changed 



