a = list(input())

b=list(reversed(a))
flag =1

for i in range(len(a)) :
    if a[i] ==b[i] :
        continue
    else :
        flag=0
        break
        
if flag==1:
    print(1)
else :
    print(0)