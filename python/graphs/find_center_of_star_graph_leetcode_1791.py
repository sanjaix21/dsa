class Solution(object):
    def findCenter(self, edges):
        """
        :type edges: List[List[int]]
        :rtype: int
        """
        a = edges[0][0]
        b = edges[0][1]
        if a in edges[1]:
            return a
        return b

sol = Solution()
a = [[1,2],[2,3],[4,2]]
ans = sol.findCenter(a)
print (ans)

