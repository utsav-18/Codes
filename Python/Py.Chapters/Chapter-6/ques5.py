# names = {'utsav', 'supriya', 'aman', 'manish'}

# n = input("Enter your name: ")
# a = 0

# for name in names:
#     if name == n:
#         a = 1

# if a == 1:
#     print("Name is matched!")
# else:
#     print("Not Found!")

names = {'utsav', 'supriya', 'aman', 'manish'}

n = input("Enter your name: ")

if n in names:
    print("Name is matched!")
else:
    print("Not Found!")
