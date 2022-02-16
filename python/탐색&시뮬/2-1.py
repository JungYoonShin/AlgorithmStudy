n = int(input())
for i in range(n):
    word = input()
    word = word.lower()
    #권장방법
    size = len(word)
    for j in range(size//2):
        if word[j]!=word[-1-j]:
            print('#%d NO' %(i+1))
            break
    else:
        print('#%d YES' %(i+1))

        
    '''
    if word == word[len(word)::-1] : #word[::-1]
        print('#%d YES' %(i+1))
    else:
        print('#%d NO' %(i+1))
    '''
