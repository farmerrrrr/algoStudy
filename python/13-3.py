n = int(input())
data = list(map(int, input().split()))
data.sort()

cnt = 0
num = 1

for x in data :
  if x == num :
    cnt += 1
    num = 1
  else :
    num += 1

print(cnt)