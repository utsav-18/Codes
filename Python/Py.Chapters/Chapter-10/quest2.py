class solve():
    
    @staticmethod
    def hello():
        print("Hello World")

    def square(self,n):
        return n**2
    
    def cube(self,n):
        return n**3
    
    def sqrt(self,n):
        return n**0.5
    

    
ques = solve()

print(ques.square(2))
print(ques.cube(2))
print(ques.sqrt(4))
ques.hello()
