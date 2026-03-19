class Student:
    def __init__(self,name,marks):
        self.name = name
        self.marks = marks

    def avg(self):
        sum = 0
        for i in range(len(self.marks)):
            sum += self.marks[i]
        return sum/len(self.marks)

    
s1 = Student("Utsav Raj", [89,90,92])
s1.name="Utsav Raj"
print(f"{s1.name}'s Avg Marks = {s1.avg()}")