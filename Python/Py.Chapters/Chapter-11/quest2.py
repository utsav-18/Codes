class Animal:
    def speak(self):
        print("Animal Speaks")
    
class pets(Animal):
    def food(self):
        print("Pets eats food")

class Dog(pets):
    def bark(self):
        print("Dog is Barking!!")

d = Dog()
d.bark()
d.food()
d.speak()