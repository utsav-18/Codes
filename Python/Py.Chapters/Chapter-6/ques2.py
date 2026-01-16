mark1 = int(input("Enter marks :"))
mark2 = int(input("Enter marks :"))
mark3 = int(input("Enter marks :"))

perc = (100)*(mark1+mark2+mark3)/300

if(perc>=40 and mark1>=33 and mark2>=33 and mark3>=33):
    print("You are passed: ", perc)
else:
    print("You are failed: ", perc)