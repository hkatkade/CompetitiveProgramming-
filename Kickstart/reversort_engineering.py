import collections as coll
import sys
import math as mt
import random as rd
import bisect as bi
import time

sys.setrecursionlimit(1000000)

# import numpy as np


def uno():
    return int(sys.stdin.readline().strip())


def dos():
    return sys.stdin.readline().strip()


def tres():
    return map(int, sys.stdin.readline().strip().split())


def cuatro():
    return sys.stdin.readline().strip().split()

for _ in range(uno()):
    n, c = tres()
    ans = [i + 1 for i in range(n)]
    mn, mx = n - 1, ((n * n + n) // 2) - 1
    if c < mn or c > mx:
        print(f"Case #{_+1}:", "IMPOSSIBLE")
        continue
    cc, a, st = c, n, 0
    while a <= cc:
        cc -= a
        a -= 1
        st += 1
    a, cc = 0, n - 1 - st
    for i in range(st):
        a += n - i
    b = 0
    if c - a != cc:
        b = cc - c + a
    for i in range(st - 1):
        j = ans.index(st - i)
        ans[j:n] = ans[j:n][::-1]
    if st > 0:
        j = ans.index(1)
        ans[j : n - b] = ans[j : n - b][::-1]
    d = ans.copy()
    print(f"Case #{_+1}:", *ans)