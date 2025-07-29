a = list(input())

move=0
movenum=0

for i in range(len(a)):
    if a[i] in ['A', 'B', 'C'] :
        movenum=3
    elif a[i] in ['D', 'E', 'F'] :
        movenum=4
    elif a[i] in ['G', 'H', 'I']  :
        movenum=5
    elif a[i] in ['J', 'K', 'L']  :
        movenum=6
    elif a[i] in ['M', 'N', 'O']  :
        movenum=7
    elif a[i] in ['P', 'Q', 'R', 'S'] :
        movenum=8
    elif a[i] in ['T', 'U', 'V']  :
        movenum=9
    elif a[i] in ['X', 'Y', 'W', 'Z'] :
        movenum=10
    move +=movenum
    

print(move)