from bisect import bisect_left, bisect_right

n, m = map(int, input().split())
arr = list(map(int, input().split()))

cnt = bisect_right(arr, m) - bisect_left(arr, m)

if cnt == 0:
  print(-1)
else:
  print(cnt)