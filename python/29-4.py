for t in range(int(input())):
  n, m = map(int, input().split())
  array = list(map(int, input().split()))

  dp = []
  idx = 0
  # m 만큼(행 단위) 데이터 슬라이싱으로 dp 테이블 초기화
  for i in range(n):
    dp.append(array[idx:idx + m])
    idx += m

  for j in range(1, m):
    for i in range(n):
      left_up = 0 if i == 0 else dp[i - 1][j - 1]
      left_down = 0 if i == n - 1 else dp[i + 1][j - 1]
      left = dp[i][j - 1]
      dp[i][j] = max(left_up, left, left_down) + dp[i][j]

  result = 0
  for i in range(n):
    result = max(result, dp[i][m - 1])
  print(result)
