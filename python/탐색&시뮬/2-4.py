n = int(input())
list1 = list(map(int, input().split()))
m = int(input())
list2 = list(map(int, input().split()))

'''
new_list = list1+list2
new_list.sort()
print(new_list)

new_list = list1 + list2
for i in range(len(new_list)):
    for j in range(i+1, len(new_list)):
        if new_list[i] > new_list[j]:
            new_list[i], new_list[j] = new_list[j], new_list[i]
print(new_list)
    
'''
new_list= []

p1=p2=0
while p1<n and p2<m:
    if list1[p1] <= list2[p2]:
             new_list.append(list1[p1])
             p1+=1
    else:
        new_list.append(list2[p2])
        p2+=1
if p1 < n:
    new_list+= list1[p1::]
if p2 < m:
    new_list+= list2[p2::]
print(new_list)
    
