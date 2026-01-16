def toBinary(n):
    # Converts a decimal number to binary string
    binary = bin(n)
    return binary[2:]

def binaryToDecimal(b):
    # Converts a binary string to decimal number
    return int(b, 2)

# Test cases
print(toBinary(8))         # Output: 1000
print(binaryToDecimal('1010'))  # Output: 10
