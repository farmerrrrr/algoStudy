str = input()

result = int(str[0])

for i in range(1, len(str)) :
  n = int(str[i])
  if result <= 1 or n <= 1 :
    result += n
  else :
    result *= n

print(result)