#we use @property decorator on any method in the class to use the method as a property

class Student: 
    def __init__(self,chem,math,phy): 
        self.chem = chem 
        self.math = math 
        self.phy = phy 
        #self.percentage = str((chem+math+phy)/3) + "%" = > like this the value will not change

        @property 
        def percentage(self): 
            return str((self.chem+self.math+self.phy)/3) + "%" 
        


s1 = Student(98,97,99) 
print(s1.phy) 
print(s1.percentage) 
s1.phy=79 
print(s1.percentage)