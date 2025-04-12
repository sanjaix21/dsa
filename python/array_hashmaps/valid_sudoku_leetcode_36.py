from typing import List
class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        row_map = []
        col_map = []
        grid_map = []

        for i in range(9):
            row = board[i]
            row_map.append(self.make_map(row))

        for i in range(9):
            col = []
            for j in range(9):
                col.append(board[j][i])
            col_map.append(self.make_map(col))

        for top in range(0, 9, 3):
            for left in range(0, 9, 3):
                subgrid = []
                for row in range(3):
                    for col in range(3):
                        subgrid.append(board[top+row][left+col])
                grid_map.append(self.make_map(subgrid))
        for i in range(9):
            row = row_map[i]
            if not self.validate_map(row):
                return False
            col = col_map[i]
            if not self.validate_map(col):
                return False
            grid = grid_map[i]
            if not self.validate_map(grid):
                return False

        return True
    
    def validate_map(self, d) -> bool:
        for key in d.keys():
            if d[key] > 1:
                return False
        return True

    def make_map(self, row) -> dict[int, int]:
        d = {}
        for i in row:
            if i == '.':
                continue
            d[i] = d.get(i, 0) + 1
        return d



sol = Solution()
g = [["5","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]

ans = sol.isValidSudoku(g)
print(ans)

board = [["8","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]

ans = sol.isValidSudoku(board)
print(ans)
