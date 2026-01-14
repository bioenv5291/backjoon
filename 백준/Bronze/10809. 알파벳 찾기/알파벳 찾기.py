num = str(input())
strlist = 'abcdefghijklmnopqrstuvwxyz'

for i in strlist:
    if i in num:
        print(num.index(i), end=' ')
    else :
        print(-1, end=' ')