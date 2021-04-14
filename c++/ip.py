def factors(n):
    return [(i, int(n / i)) for i in range(1, int(n**0.5) + 1) if n % i == 0]
#t = int(input())
#for j in range(0,t+1):
a = int(input())
b = factors(a)
res = min(b, key=lambda sub: abs(sub[1] - sub[0]))
print(*res, sep=" ")