sentence1 = "Utsav is a good boy"
print(sentence1.find("  "))

sentence2 = "Utsav is a good  boy"
print(sentence2.find("  "))

# REplace a doble space with single space

print(sentence2)
print(sentence2.replace("  ", " "))
print(sentence2) #because string is immutable