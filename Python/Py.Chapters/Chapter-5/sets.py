# Create a set of numbers
numbers = {1, 2, 3, 4,4,4, 5,0}


# Print the final set
print("My numbers:", numbers)

# Add a number
numbers.add(6)

# Remove a number
numbers.remove(3) #error if not found
numbers.discard(0) #no error if missing 

# Check if a number exists
if 4 in numbers:
    print("4 Found!!")


# Print the final set
print("My numbers:", numbers)

#methods
numbers.remove(1);
print(numbers)