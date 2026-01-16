n = int(input("Enter a number: "))

candidate = n + 1

while True:
    is_prime = True  # assume it's prime

    if candidate < 2:
        is_prime = False
    else:
        for i in range(2, int(candidate ** 0.5) + 1):
            if candidate % i == 0:
                is_prime = False
                break

    if is_prime:
        print("The first prime number greater than", n, "is", candidate)
        break
    else:
        candidate += 1
