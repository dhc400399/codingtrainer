def fib(n):
    # 코드를 입력하세요.
    if n < 3:
        return 1
    else:
        return fib(n - 1) + fib(n - 2)
print(fib(11))