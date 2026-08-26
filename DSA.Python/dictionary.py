# student = {
#     "name": "Utsav",
#     "age": 21,
#     "branch": "IT",
#     "cgpa": 8.9
# }

# for key,value in student.items():
#     print(key,":",value)

# arr = [1,2,3,4,5,2,4]

# freq = {}

# for x in arr:
#     if x in freq:
#         freq[x]+= 1
#     else:
#         freq[x]=1

# for key,value in freq.items():
#     print(key,":",value)

def two_sum(nums,target):
    seen = {}
    for i, x in enumerate(nums):
        needed = target-x
        if needed in seen:
            return [nums[seen[needed]],nums[i]]
        seen[x] = i
    return []

nums = [2, 7, 11, 15]
target = 9

print(two_sum(nums, target))