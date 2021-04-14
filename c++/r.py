import random
f=open("i1.txt",'w')
for t in range(0,500):
    n = random.randint(1,1000)
    f.write(str(n) + "\n")
