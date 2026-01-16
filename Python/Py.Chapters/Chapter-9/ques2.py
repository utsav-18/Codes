import random

def game(num):
    score = open("hi-score.txt")
    prev = score.read()
    

    if(int(prev)<num):
        score = open("hi-score.txt","w")
        score.write(f"{str(num)}\n")

    else:
        score.close()


s = random.randint(1,100)
game(s)