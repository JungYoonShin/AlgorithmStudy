'''
n, m = map(int, input().split())
list1 = list(map(int, input().split()))
count = 0
for i in range(len(list1)):
    sum=0
    for j in range(i, len(list1)):
        sum += list1[j]
        if sum == m:
            count+=1
            break
print(count)
'''
n, m = map(int, input().split())
list1 = list(map(int, input().split()))
lt=0
rt=1
cnt=0
total=list1[0]
while True:
    if total<m:
        if rt<n:
           total+=list1[rt]
           rt+=1
        else:
            break
    elif total==m:
        cnt+=1
        total-=list1[lt]
        lt+=1
    else:
        total-=list1[lt]
        lt+=1
        
        
print(cnt)
