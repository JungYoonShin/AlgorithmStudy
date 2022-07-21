def solution(s):
    answer = len(s)
    lengths = []
    for step in range(1, len(s) // 2 + 1):
        count = 1
        group = ""
        prev = s[0:step]
        for j in range(step, len(s), step):
            if prev == s[j : j + step]:
                count += 1
            else:
                group += str(count) + prev if count >= 2 else prev
                prev = s[j: j + step]
                count = 1
        group += str(count) + prev if count >= 2 else prev
        answer = min(answer, len(group))
    return answer
# if-else문 한 줄로 압출할 수 있는 one-liner 알아두기!
            