n = int(input())
a = [list(map(int, input().split())) for _ in range(n)]
M = int(input())
for i in range(M):
    h, t, k = list(map(int, input().split()))
    if t==0:
        for _ in range(k):
            pop = a[h-1].pop(0)
            a[h-1].append(pop)
    else:
        for _ in range(k):
            pop = a[h-1].pop()
            a[h-1].insert(0, pop)

s=total=0
e=n
for i in range(n):
    for j in range(s, e):
        total += a[i][j]
    if i<n//2:
        s+=1
        e-=1
    else:
        s-=1
        e+=1
print(total)
