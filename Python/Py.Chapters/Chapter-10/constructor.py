# class Employee:
#     language = "Python"
#     salary = 1200000

#     def __init__(self): #dunder method which is automatically called
#         print("I am creating an object")

#     def getInfo(self):
#         print(f"The language is {self.language}. The salary is {self.salary}")

#     @staticmethod
#     def greet():
#         print("Good Morning")

# utsav = Employee()
# utsav.greet()
# utsav.name = "Utsav Raj"
# print(f"Name: {utsav.name}\nSalary: {utsav.salary}\n")

# manish = Employee()
# raj  = Employee()

class Employee:
    lang = "Python"
    salary = 12000

    def __init__(self , name , salary , lang):
        self.name = name
        self.lang = lang
        self.salary = salary
        print("I am creating an object")


utsav = Employee("Ustav Raj", 1200000 , "JavaScript")
print(f"Name: {utsav.name}\nSalary: {utsav.salary}\nLanguage: {utsav.lang}")

