num = int(input())

for i in range(num):
    str = list(input())
    score = 0
    total_score = 0
    for char in str:
        if char == 'O':
            score +=1
            total_score += score
        else:
            score = 0
    print(total_score)