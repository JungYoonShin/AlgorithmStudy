'''
divisor = []
n, k = map(int, input().split())

for i in range (1, n+1):
    if n%i==0:
        divisor.append(i)

if k>len(divisor):
    print(-1)
else:
    print(divisor[k-1])
    
'''
n, k = map(int, input().split())
num = 0
for i in range (1, n+1):
    if n%i==0:
        num+=1
    if num==k:
        print(i)
        break
else:
    print(-1)
