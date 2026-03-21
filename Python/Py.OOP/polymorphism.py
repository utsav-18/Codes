# Dunder function =  a.__add__(b) = operator overloading

class Complex:
    def __init__(self, real, img):
        self.real = real
        self.img = img
    
    def showNumber(self):
        print(self.real, "i + ",self.img, "j")
        
    def __add__(self,num2):  #Dunder function  = internally =  num1.__add__(num2)
        newReal = self.real + num2.real
        newImg = self.img + num2.img
        return Complex(newReal,newImg)
    
    def __sub__(self,num2):  #Dunder function = internally =  num1.__sub__(num2)
        newReal = self.real - num2.real
        newImg = self.img - num2.img
        return Complex(newReal,newImg)
    
num1 = Complex(1,3)
num1.showNumber()

num2 = Complex(4,6)
num2.showNumber()

# num3 = num1.add(num2)
# num3.showNumber()

num3 = num1+num2 #not possible without dunder function
num3.showNumber()

num4 = num1-num2 #not possible without dunder function
num4.showNumber()

