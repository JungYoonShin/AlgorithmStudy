def solution(N, stages):
    count = [0] * (N + 2)
    for i in range(len(stages)):
        count[stages[i]] += 1
        
    failure = []
    
    for i in range(1, len(count)):
        if i > N :
            break
        rate = sum(count[i:])
        if count[i] == 0 and rate == 0:
            failure.append([i, 0])
        else:
            fail = count[i] / rate
            failure.append([i, fail])

    failure.sort(key = lambda x : x[1], reverse = True)
    print(failure)
    return list(map(lambda x : x[0], failure))