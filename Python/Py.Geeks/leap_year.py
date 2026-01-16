y = int(input("Enter Year: "))

if(y%4 == 0) and (y%100 !=0):
    print("Yes")
elif (y%400 == 0):
    print("Yes")
else:
    print("No")