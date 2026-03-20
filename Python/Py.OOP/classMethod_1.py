class Person:
    name = "anonymous"

    def changeName(self,name):  # here it is creating a new attribute, not changin the value
        self.name = name

p1 = Person()
print(p1.name)
p1.changeName("Utsav Raj")
print(p1.name)

print(Person.name) # here it is creating a new attribute, not changin the value == Proved 

