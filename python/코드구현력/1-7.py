'''n = int(input())
cnt = 0
for i in range(2, n+1):
    for j in range(2, i):
        if i%j==0:
            break
    else:
        cnt +=1
print(cnt)'''


#에라토스테네스 체
n = int(input())
ch = [0]*(n+1)
cnt = 0
for i in range(2, n+1): 
    if ch[i]==0:
        cnt += 1
        for j in range(1, n//i+1):  #for i in range(i, n+1, i)
            ch[i*j]+=1
print(cnt)


