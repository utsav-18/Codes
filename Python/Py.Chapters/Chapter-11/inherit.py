class Animal:
    def speak(self):
        print("Animal Speaks")

class Dog(Animal):
    def bark(self):
        print("Dog barks")

class Cat(Animal):
    def meow(self):
        print("Cat Meaow")


d = Dog()
d.speak()
d.bark()

c  = Cat()
c.speak()
c.meow()