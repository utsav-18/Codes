class Car:
    @staticmethod
    def start():
        print("Car started!!")
    @staticmethod
    def stop():
        print("Car stopped!!")

class Toyota(Car):
    def __init__(self,brand):
        self.brand=brand

class Fortuner(Toyota):
    def __init__(self,type,brand):
        super().__init__(brand) # super() = “call parent class code
        self.type = type
       

car1 = Fortuner("Diesel",'Toyota')

print(car1.type)
print(car1.brand)
car1.start()
car1.stop()