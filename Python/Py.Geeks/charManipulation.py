def manipulateIt(s):
    ans=""
    for i in range(0,len(s),2):
        ch = s[i]
        n = int(s[i+1])

        ans=ans+ chr((ord(ch) - ord ('a') + n) % 26 + ord('a'))
    return ans

s = "y2b2"

ns = manipulateIt(s)
print(ns)