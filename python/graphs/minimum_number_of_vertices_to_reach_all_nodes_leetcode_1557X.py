class Solution(object):
    def findSmallestSetOfVertices(self, n, edges):
        dest = []
        org = []
        for i in edges:
            dest.append(i[1])
            org.append(i[0])
        return list(set(org) - set(dest))

a = [[0,1],[0,2],[2,5],[3,4],[4,2]]
n = 6
sol = Solution()
ans = sol.findSmallestSetOfVertices(n, a)
print(ans)

