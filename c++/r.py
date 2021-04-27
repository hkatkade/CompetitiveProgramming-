import random

for t in range(0, 50):
    l = []
    n = random.randint(1, 1000)
    m = random.randint(1, n)
    #print("{} {}".format(n, m))
    for i in range(m):
        x = random.randint(1, n)
        l.append(x)
    s = set(l)
    print("{} {}".format(n, len(s)))
    print(*s)
