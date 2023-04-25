d = [0] * 100

n = int(input())
strg = list(map(int, input().split()))

d[0] = strg[0]
d[1] = strg[1] if strg[0] < strg[1] else strg[0]  # max(strg[0], strg[1])

for i in range(2, n):
  # d[i] = max(d[i-1], d[i-2] + strg[i])
  if d[i - 2] + strg[i] > d[i - 1]:
    d[i] = d[i - 2] + strg[i]
  else:
    d[i] = d[i - 1]

print(d[n - 1])