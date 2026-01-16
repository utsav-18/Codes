n = int(input("Enter a number: "))

if(n<=1):
    print("Not a prime")

else:
    flag = True
    for i in range(2,n):
        if(n%i==0):
            flag=False
            break

    if(flag==True):
        print("Prime")
    else:
        print("Not a prime")