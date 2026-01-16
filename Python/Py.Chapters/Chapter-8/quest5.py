n = int(input("Enter a number: "))

def pat(n):
    if(n==0):
        return 1
    else:
        print('*'*n)
    return pat(n-1)


pat(n)
