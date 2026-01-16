#User function Template for python3
n = int(input())
a = 0
# Your code here
if n>0:
    for i in  range(2,int(n**0.5)+1):
        if n%i==0:
            print("False")
            break
    else:
        print("True")
else:
    print("False")