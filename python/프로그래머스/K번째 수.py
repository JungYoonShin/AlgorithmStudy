def solution(array, commands):
    answer = []
    new = []
    #for i, j, k in commands:
    for command in commands:
        # start = commands[i][0] - 1
        # end = commands[i][1]
        # new = array[start:end]
        i, j, k = command
        new = array[i-1:j]
        new.sort()
        answer.append(new[k-1])
        # answer.append(list(sorted(array[i-1:j]))[k-1])
        
    return answer

def solution(array, commands):
    return list(map(lambda x:sorted(array[x[0]-1:x[1]])[x[2]-1], commands))