//dynamic programming
from sys import stdin
//dp의 기본

if __name__ == '__main__':
    t = int(stdin.readline())
    dp = [1] * 10001
    for i in range(2, 10001):
        dp[i] += dp[i - 2]

    for i in range(3, 10001):
        dp[i] += dp[i - 3]

    for _ in range(t):
        n = int(stdin.readline())
        print(dp[n])