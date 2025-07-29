N, M = map(int, input().split())
numlist = []

for i in range(N):
    numlist.append(i+1)

for i in range(M) :
    num1, num2 = map(int, input().split())
    temp = numlist[num1-1]
    numlist[num1-1] = numlist[num2-1]
    numlist[num2-1] = temp

print(*numlist)