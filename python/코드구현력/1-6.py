N = int(input())
num = list(map(int, input().split()))
sum = [0]*N
def digit_sum(x):
    n = 0
    for i in str(x):
        n += int(i)
    return n
    '''
    while x > 0:
        n += (x % 10)
        x //= 10
    return n
    '''
max = -2147000000
'''
for i in range(N):
    sum[i] = digit_sum(num[i])
    if sum[i] > sum[max]:
        max = i
print(num[max])
'''
for x in num:
    tot = digit_sum(x)
    if tot > max:
        max = tot
        res = x

print(res)
    
