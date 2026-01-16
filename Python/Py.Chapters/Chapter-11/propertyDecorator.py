# class Employee:
#     a = 1
#     @classmethod
#     def show(cls):
#         print(f"The class value of a is {cls.a}")

#     @property
#     def name(self):
#         return f"{self.fname} {self.lname}"
    
#     @name.setter
#     def name(self,value):
#         self.fname = value.split(" ")[0]
#         self.lname = value.split(" ")[1]

# e = Employee()
# e.a = 45

# e.name = "Utsav raj"
# print(e.name)

# e.show()

class Student:
    def __init__(self, marks):
        self._marks = marks

    @property
    def grade(self):
        if self._marks >= 90:
            return "A"
        elif self._marks >= 75:
            return "B"
        else:
            return "C"

s = Student(92)
print(s.grade)  # No () needed → Output: A

