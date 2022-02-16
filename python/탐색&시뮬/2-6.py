n = int(input())
a = [list(map(int, input().split())) for _ in range(n)]
sum = []
dia=dia2=0
largest = -2147000000
for i in range(n):
    col=row=0
    for j in range(n):
        col += a[i][j]
        row += a[j][i]
    if col>largest:
        largest=col
    if row>largest:
        largest=row
sum1=sum2=0
for i in range(n):
    sum1+=a[i][i]
    sum2+=a[i][n-i-1]
if sum1>largest:
    largest=sum1
if sum2>largest:
    largest=sum2
print(largest)
        
