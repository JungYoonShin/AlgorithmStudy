n = int(input())
a = [0]*(n+1)
'''
def calcReward(x):
    cnt = 0
    max = x[0]
    for i in range(1, len(x)):
        if max < x[i]:
            max = x[i]
        if x[i] == x[i-1]:
            same = x[i]
            cnt += 1
    if cnt == 0:
        return max * 100

    return 10**(cnt+2) + same * 10**(cnt+1)
        
max = 0
for i in range(n):
    a[i] = list(map(int, input().split()))
    a[i] = calcReward(a[i])
    if max < a[i]:
        max = a[i]

print(max)
'''
max = 0
for i in range(n):
    tmp = input().split()
    tmp.sort()
    a, b, c = map(int, tmp)
    if a==b and b==c:
        reward = 10000 + a*1000
    elif a==b or a==c:
        reward = 1000 + a*100
    elif b==c:
        reward = 1000 + b*100
    else:
        reward =c*100
    if max < reward:
        max = reward
print(max)
    
        
        
