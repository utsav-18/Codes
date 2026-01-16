num = []
total=0

for i in range(5):
    n = int(input(f"Enter Number {i+1}: "))
    num.append(n)

# for i in range(len(num)):
#     total += num[i]



print(num)
# print("Sum: ",total)
print("Sum: ",sum(num))