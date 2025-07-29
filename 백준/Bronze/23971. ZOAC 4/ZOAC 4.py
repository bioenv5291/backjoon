H, W, N, M = map(int, input().split())
col=0
row=0
count_col=0
count_row=0
while H >= (N+1)*col+1:
    col+=1
    count_col+=1

while W>=(M+1)*row+1:
    row+=1
    count_row+=1

print(count_col*count_row)
