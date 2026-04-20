class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        rows = defaultdict(set)
        cols = defaultdict(set)
        squares = defaultdict(set)
        for r in range(9):
            for c in range(9):
                current = board[r][c]
                if current == '.': 
                    continue

                s = (r // 3) * 3 + (c // 3)

                if current in rows[r] or current in cols[c] or current in squares[s]:
                    return False
                
                rows[r].add(current)
                cols[c].add(current)
                squares[s].add(current)
            
        return True

                

            