n, m = map(int, input().split())

basket = [i for i in range (1,n+1)]
tmp =0

for i in range(m) :
    num1, num2 = map(int, input().split())
    tmp = basket[num1-1:num2]
    tmp.reverse()
    basket[num1-1:num2]=tmp

print(*basket)