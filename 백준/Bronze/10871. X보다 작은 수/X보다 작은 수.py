num1, num2 = map(int, input().split())
result = []
s = list(map(int, input().split()))
for i in range(num1):
    if s[i] < num2:
        result.append(s[i])
for i in range(len(result)):
    print(result[i], end=" ")