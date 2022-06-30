def solution(array, commands):
    answer = []
    new = []
    for i in range(len(commands)):
        start = commands[i][0] - 1
        end = commands[i][1]
        new = array[start:end]
        
        new.sort()
        answer.append(new[commands[i][2]-1])
        
    return answer