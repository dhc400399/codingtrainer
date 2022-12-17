# A ** B % C

import sys

A, B, C = map(int, sys.stdin.readline().rstrip().split())

def f(A, B, C):
    if B == 1:
        return A % C
    x = f(A, B//2, C)
    return x**2 % C if B%2 == 0 else (x**2 % C) * (A%C) % C

print(f(A, B, C))