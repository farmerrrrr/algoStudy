n = int(input())
a = list(map(int, input().split()))
a.reverse()

dp = [1] * n

for i in range(1, n):
  for j in range(0, i):
    if a[j] < a[i]:
      dp[i] = max(dp[i], dp[j] + 1)

print(n - max(dp))