numlist = []
for i in range(10):
    numlist.append(int(input()))

for i in range(10):
    numlist[i] = numlist[i] % 42

print(len(set(numlist)))    