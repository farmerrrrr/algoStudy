n, m = map(int, input().split())
arr = list(map(int, input().split()))
start, end = 0, max(arr)
max = 0

while start <= end:
  mid = (start + end) // 2
  sum = 0
  for i in range(n):
    if arr[i] > mid:
      sum += arr[i] - mid
  if sum > m:
    start = mid + 1
    max = mid
  elif sum < m:
    end = mid - 1

print(max)
