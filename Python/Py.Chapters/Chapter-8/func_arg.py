def greet(name):
    gr = "Hello "+name
    return gr

def avg(a,b,c):
    average = (a+b+c)/3
    return average


a = greet('Utsav')
print(a)
b = avg(45,5,50)
print(b)

print((id(a)))
