n, k = map(int, input().split())
cnt = 0

while True :
  tmp = (n // k) * k
  cnt += n - tmp
  n = tmp
  if n < k :
    break
  n //= k
  cnt += 1

print(int(cnt-1));