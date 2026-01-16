'''1 for snake
-1 for water
0 for gun'''
import random

computer = random.choice([-1,0,1])

youstr = input("Enter your choice (s for Snake, w for Water, g for Gun): ").lower()

youDict = {"s": 1, "w": -1, "g": 0}
reverceDict = {1: "Snake", -1: "Water", 0: "Gun"}

you = youDict.get(youstr)

# Validation check
if you is None:
    print("❌ Invalid input! Please enter 's' for Snake, 'w' for Water, or 'g' for Gun.")
    exit()

print(f"You chose {reverceDict[you]}\nComputer chose {reverceDict[computer]}")

if computer == you:
    print("It's a draw")
elif computer == -1 and you == 1:
    print("You Win!")
elif computer == -1 and you == 0:
    print("You Lose!")
elif computer == 1 and you == -1:
    print("You Lose!")
elif computer == 1 and you == 0:
    print("You Win!")
elif computer == 0 and you == -1:
    print("You Win!")
elif computer == 0 and you == 1:
    print("You Lose!")
else:
    print("Something went wrong!!")
