from collections import deque
class Solution(object):
    def numIslands(self, grid):
        count = 0
        check = [[False for _ in range(len(grid[0]))] for _ in range(len(grid))]

        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == '1' and check[i][j] == False:
                    count += 1
                    self.search(grid, check, i, j)

        return count

    def search(self, grid, check, i, j):
        myq = deque([(i, j)])
        while myq:
            i, j = myq.popleft()
            if 0 <= i < len(grid) and 0 <= j < len(grid[0]) and grid[i][j] == '1' and check[i][j] == False:
                check[i][j] = True
                myq.extend([(i-1, j), (i+1, j), (i, j-1), (i, j+1)])

a = [["1","1","1","1","0"],["1","1","0","1","0"],["1","1","0","0","0"],["0","0","0","0","0"]]
a = [["1","1","0","0","0"],["1","1","0","0","0"],["0","0","1","0","0"],["0","0","0","1","1"]]
sol = Solution()
ans = sol.numIslands(a)
print(ans)

