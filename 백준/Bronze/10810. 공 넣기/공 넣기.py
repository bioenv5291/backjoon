N, M = map(int, input().split())
numlist = []

for i in range(N):
    numlist.append(0)

for i in range(M) :
    num1, num2, num3 = map(int, input().split())
    num1=num1-1
    num2=num2-1
    while num2-num1+1>0:
        if numlist[num1] == 0 :
            numlist[num1] =num3
        else :
            numlist[num1]=num3
        num1+=1

print(*numlist)