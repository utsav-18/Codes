inches = int(input("Enter inches: "))

def cm(inches):
    ans = inches * 2.54
    return ans


print(f"{inches} inches is equals to {cm(inches)}cm")