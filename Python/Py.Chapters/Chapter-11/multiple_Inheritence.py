# class Employee:
#     company = "ITC"
#     name = "Default name"
#     def show(self):
#         print(f"The name of the Employee is {self.name} and the salary is {self.company}")

# class Coder:
#     language = "Pythion"
#     def printLanguage(self):
#         print(f"Out of all language here is your language: {self.language}")

# class Programmer(Employee , Coder):
#     company = "ITC Infotech"
#     def  showLanguage(self):
#         print(f"The naem is {self.company} and he is good with {self.language} language")

# a = Employee()
# b = Programmer()

# b.show()
# b.printLanguage()
# b.showLanguage()

class Father:
    def skills(self):
        print("Father: Cooking, Driving")

class Mother:
    def hobbies(self):
        print("Mother: Dancing, Painting")

class Child(Father, Mother):
    def talents(self):
        print("Child: Coding, Gaming")


c = Child()
c.skills()     # From Father
c.hobbies()    # From Mother
c.talents()    # From Child
