count = int(input())
loopnum= int(input())
sum=0

for i in range(loopnum):
    price, product = map(int, input().split())
    sum+=price*product

if sum==count :
    print("Yes")
else :
    print("No")