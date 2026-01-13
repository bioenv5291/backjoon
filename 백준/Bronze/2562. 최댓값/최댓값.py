num = []
for i in range(9):
    num.append(int(input()))
max = 0
max_index=0

for i in range(9):
    if num[i] > max:
        max=num[i]
        max_index=i

print(max)
print(max_index+1)