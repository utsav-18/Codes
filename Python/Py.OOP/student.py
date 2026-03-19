class Student:
    college_name = "Alliance University" #class attribute
    
    def __init__(self, name, marks):
        self.name = name #  object attribute > class attribute
        self.marks = marks

    def welcome(self):
        print("\nWelcome to Alliance University!!", self.name.title())

    def get_marks(self):
        return self.marks

s1 = Student("utsav",91)
s1.welcome()
print(s1.name," Marks: ",s1.get_marks())


print(f"{s1.name.title()}'s Marks: {s1.marks}, College Name: {s1.college_name}")

s2 = Student("Raj",86)
print(f"{s2.name.title()}'s Marks: {s2.marks}, College Name: {s1.college_name}")


s3 = Student("Aman",76)
print(f"{s3.name.title()}'s Marks: {s3.marks}, College Name: {s1.college_name}")
