class Employee:
    lang = "py"
    salary = 2400000

    def getInfo(self):
        print(f"The language is {self.lang}. The salary is {self.salary}")

    @staticmethod
    def greet():
        print("Hello World")

utsav = Employee()
utsav.name = "Utsav Raj"
print(utsav.name,utsav.lang,utsav.salary)

utsav.getInfo()
#Employee.getInfo(harry)
utsav.greet()