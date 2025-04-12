class Solution(object):
    def climbStairs(self, n):
        return self.climb(0, n)

    def climb(self, step, n):
        if step == n:
            return 1
        if step > n:
            return 0
        return self.climb(step+1, n) + self.climb(step+2, n)
a = 3
# a = 2
a = 38
sol = Solution()
ans = sol.climbStairs(a)
print(ans)
