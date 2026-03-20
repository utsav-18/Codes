# It hide's data and control how it is accessed!!
class Student:
    def __init__(self):
        self.__marks = 0

    def set_marks(self,marks):
        if(0<=marks<=100):
            self.__marks = marks
        else:
            print("Ivalid Marks")
    
    def get_marks(self):
        return self.__marks
    

utsav = Student()
utsav.set_marks(91)
print(utsav.get_marks())
