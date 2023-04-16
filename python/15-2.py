dx = [1, 2, 1, 2, -1, -2, -1, -2]
dy = [2, 1, -2, -1, 2, 1, -2, -1]

pos = input()
x = int(ord(pos[0])) - int(ord('a'))
y = int(pos[1]) - 1

cnt = 0

for i in range(8):
  nx = x + dx[i]
  ny = y + dy[i]
  if nx >= 0 and nx < 8 and ny >= 0 and ny < 8:
    cnt += 1

print(cnt)
