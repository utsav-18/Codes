class programer():
    
    def __init__(self,name,exp,salary):
        self.name = name
        self.exp = exp
        self.salary = salary

    def display(self):
        print(f"Name: {self.name}\nExperience: {self.exp}\nSalary: {self.salary}\n")


utsav = programer("Utsav Raj",2,100000)
utsav.display()

muskan = programer("Muskan",2,120000)
muskan.display()