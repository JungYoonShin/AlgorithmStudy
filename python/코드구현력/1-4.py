n = int(input())
score = list(map(int, input().split()))
avg = sum(score)/n + 0.5
avg = int(avg)
'''
scoreClose = 0

for i in range (len(score)):
    if abs(score[i]-avg) < abs(score[scoreClose]-avg):
        scoreClose = i
    elif abs(score[i]-avg) == abs(score[scoreClose]-avg):
        if score[i] > score[scoreClose]:
            scoreClose = i
print("%d %d" %(avg, scoreClose+1))
'''
min = 2147000000
for idx, x in enumerate(score):
    tmp = abs(x-avg)
    if tmp < min:
        min = tmp
        scores = x
        res = idx + 1
    elif tmp == min:
        if x > scores:
            scores = x
            res = idx + 1
print("%d %d" %(avg, res))
