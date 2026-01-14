num = int(input())

for i in range(num):
    num, str = input().split()
    for j in range(len(str)):
        print(str[j] * int(num), end='')
    print()
