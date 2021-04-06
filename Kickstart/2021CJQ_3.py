#print("hc")
t=int(input())
for x in range(1, t + 1):
    n, c = map(int, input().split())
    if (c < (n - 1) or c > (((n + (n * n)) // 2)) - 1):
        print("Case #{}: {}\n".format(x, "IMPOSSIBLE"))
        continue
    l = []
    for i in range(1, n + 1):
        l.append(i)
    steps =0
    cost = c
    a = n
    while (a <= cost):
        steps = steps + 1
        cost = cost - a
        a = a - 1
    a = 0
    cost = n - 1 - steps
    for i in range(steps):
        a = a + (n - i)
    b = 0
    if ((c - a) != cost):
        b = cost - c + a
    for i in range(steps - 1):
        j = l.index(steps - i)
        l[j : n - b] = l[j : n - b][::-1]
    ans=l.copy()
    print("Case #{}: ".format(x))
    for i in ans:
        print(i, end=" ")
    print()
    
    
        
         
    