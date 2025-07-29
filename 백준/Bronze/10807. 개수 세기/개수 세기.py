loopnum = int(input())
num_list = list(map(int, input().split()))
findnum = int(input())
cnt=0;

for i in range(len(num_list)):
    if num_list[i]==findnum :
        cnt+=1

print(cnt)