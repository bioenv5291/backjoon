num = int(input())
nums = list(map(int, input().split()))

max_val = -1000000
min_val = 1000000

for i in range(num):
    if nums[i] > max_val:
        max_val = nums[i]
    if nums[i] < min_val:
        min_val = nums[i]

print(min_val, max_val)
