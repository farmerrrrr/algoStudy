n, m = map(int, input().split())
cur = []

for i in range(n):
  cur.append(int(input()))

a = [10001] * (m + 1)
a[0] = 0

for i in range(n):
  for j in range(cur[i], m + 1):
    if a[j - cur[i]] != 10001:
      a[j] = min(a[j], a[j - cur[i]] + 1)

if a[m] == 10001:
  print(-1)
else:
  print(a[m])