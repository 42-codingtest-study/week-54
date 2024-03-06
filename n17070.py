import sys

home = []
N = int(input())
for _ in range(N):
    home.append([int(x) for x in sys.stdin.readline().rstrip().split()])

dp = [[[0 for _ in range(N)] for _ in range(N)] for _ in range(3)]

dp[0][0][1] = 1
for i in range(2,N):
    if home[0][i] == 0:
        dp[0][0][i] = dp[0][0][i - 1]