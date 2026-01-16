def jod(n):
    if(n==0):
        return 0
    return n+ jod(n-1)

print(jod(5))