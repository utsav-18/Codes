class Person:        
    __name="anonymous"

    def __hello(self):  # can't be accesed directly 
        print("Hello Person!!")

    def welcome(self):
        self.__hello()


p1 = Person()

p1.welcome()