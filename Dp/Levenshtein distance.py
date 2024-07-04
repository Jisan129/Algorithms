A = "A"
B = "A"
dp = []

first = len(A) + 1
second = len(B) + 1

dp = [[0] * second for _ in range(first)]

for i in range(first):
    dp[i][0] = i
for j in range(second):
    dp[0][j] += j

for i in range(1, first):
    for j in range(1, second):
        if A[i - 1] == B[j - 1]:
            dp[i][j] = dp[i - 1][j - 1]
        elif A[i - 1] != B[j - 1]:
            dp[i][j] = 1 + min(dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1])
print(dp[-1][-1])
