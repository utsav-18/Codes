class man:
    def __init__(self,name,age,salary):
        self.name=name
        self.age=age
        self.salary=salary
    def disp(self):
        print(self.name)
        print(self.age)
        print(self.salary)

utsav = man("Utsav Raj", 21 , 50000)
      
utsav.disp()