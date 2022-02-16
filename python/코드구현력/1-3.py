n, k = map(int, input().split())
num = list(map(int, input().split()))
res = set()
cnt = 0
for i in range(n):
    for j in range (i+1, n):
        for z in range(j+1, n):
            res.add(num[i]+num[j]+num[z])
res = list(res)
res.sort()
print(res[len(res)-k])
'''
res.sort(reverse=True)
print(res[k-1])
'''
