n = int(input())
scores = list(map(int, input().split()))
sum = 0
cnt = 0
for i in scores:
    if i == 1:
        cnt += 1
    else:
        cnt = 0
    sum += cnt
print(sum)
        
