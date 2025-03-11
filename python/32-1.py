import sys
import heapq

input = sys.stdin.readline
INF = int(1e9)

n, m, start = map(int, input().split())

graph = [[] for i in range(n + 1)]
distance = [INF] * (n + 1)

for _ in range(m):
  x, y, z = map(int, input().split())
  graph[x].append((y, z))


def dijkstra(start):
  q = []
  heapq.heappush(q, (0, start))
  distance[start] = 0

  while q:
    dis, cur = heapq.heappop(q)
    if distance[cur] < dis:
      continue
    for i in graph[cur]:
      cost = dis + i[1]  # 기존 거리와 비용을 합친 값
      if cost < distance[i[0]]:  # 새로운 거리가 기존 거리보다 작으면
        distance[i[0]] = cost  # 새로운 거리로 업데이트
        heapq.heappush(q, (cost, i[0]))


dijkstra(start)

cnt, max = 0, 0
for i in range(1, n + 1):
  if 0 < distance[i] < INF:
    cnt += 1
    if max < distance[i]:
      max = distance[i]

print(cnt, max)
