numlist = list(map(int, input().split()))

asc = True
desc = True
for i in range(7):
    if numlist[i] > numlist[i+1]:
        asc = False
    if numlist[i] < numlist[i+1]:
        desc = False
    if asc == False and desc == False:
        break
if asc:
    print("ascending")
elif desc:
    print("descending")
else:
    print("mixed")
