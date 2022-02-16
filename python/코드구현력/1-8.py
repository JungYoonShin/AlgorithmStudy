n = int(input())
num = list(map(int, input().split()))
def reverse(x):
    '''
    #내가 푼 방식
    x = str(x)
    x2 = ''
    for i in range(len(x)-1, -1, -1):
        x2 += x[i]
    if x2[0]=='0':
        for i in range(1, len(x2)):
            if x2[i]!='0':
                break
        x2 = x2[i:len(x2)]
    return x2
    '''
    res = 0
    while x > 0:
        t = x % 10
        res = res * 10 + t
        x = x // 10
    return res

def isPrime(x):
    x = int(x)
    if x == 1:
        return
    for i in range(2, x):
       if x%i==0:
           break
    else:
        print(x, end=' ')
            
for i in num:
    isPrime(reverse(i))
    
