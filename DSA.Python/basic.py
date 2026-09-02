print("List: ",end="")
list = ["Aman", "Utsav", 22, 21]
print(list)


print("Set: ",end="")
set = {1,2,3,4,5,5,6,7,7}
print(set)


student={
    "Utsav" : 21,
    "Aman" : 21,
    "Ram" : 20,
    "Shyam" : 80,
    "Babu Rao" : 85
}

for key,value in student.items():
    print(key,":",value)

