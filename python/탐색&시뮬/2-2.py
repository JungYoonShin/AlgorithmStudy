str = input()
num = 0
for i in str:
    if i.isdecimal(): #0~9까지의 숫자
        num = num * 10 + int(i)

cnt = 0
for i in range(1, num+1):
    if num%i==0:
        cnt += 1
print('%d\n%d' %(num, cnt))
        
