def solution(board, moves):
    answer = 0
    pouch = []
    for move in moves:
        for j in range(len(board)):
            out = board[j][move - 1]
            if out != 0:
                board[j][move - 1] = 0
                if len(pouch) > 0 and pouch[-1] == out:
                    pouch.pop()
                    answer += 2
                else:
                    pouch.append(out)
                break
    return answer
        
                