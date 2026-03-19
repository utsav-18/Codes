mark1 = int(input("Enter marks :"))
mark2 = int(input("Enter marks :"))
mark3 = int(input("Enter marks :"))
mark4 = int(input("Enter marks :"))


perc = (100)*(mark1+mark2+mark3+mark4)/160

if(perc>=40 and mark1>=33 and mark2>=33 and mark3>=33 and mark4>=33):
    print(f"You are passed: {perc} %")
else:
    print(f"You are failed: {perc} %")