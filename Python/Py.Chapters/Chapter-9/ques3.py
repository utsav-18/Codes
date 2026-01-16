# def generate(num):
#     t = open("table.txt","a")

#     for i in range(1,11):
#         t.write(f"{num} X {i} = {num*i}\n")
#     t.write("\n\n")
#     t.close()
    

# for i in range(2,21):
#     generate(i)

def generateTable(n):
    table=""
    for i in range(1,11):
        table += f"{n} X {i} = {n*i}\n"

    with open(f"tables/table_{n}.txt","w") as f:
        f.write(table)

for i in range(2,21):
    generateTable(i)