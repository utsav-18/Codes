class Bank():
    def __init__(self,age):
        self.__age = age
    def get_age(self):
        return self.__age
    def set_age(self,age):
        self.__age = age
        

PNB = Bank(20)
print(PNB.get_age())

# age = PNB.__age = it will not work 
# print(age) 
