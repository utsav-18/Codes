# nums = {1,2,2,3,3,4,4,5,5,6}
# print(nums)

arr = [1,2,3,2,4,5]

seen = set()

for x in arr:
    if x in seen:
        print("Duplicate: ",x)
        break
    seen.add(x)