baddy = 2
class Solution(object):
    def firstBadVersion(self, n):
        if n == 1:
            return n
        l, r = 1, n
        badv = n

        while(l <= r):
            mid = l + (r-l)//2
            if isBadVersion(mid):
                r = mid - 1
                badv = mid
            else:
                l = mid + 1

        return badv

def isBadVersion(n):
    if n >= baddy:
        return True
    return False

sol = Solution()
ans = sol.firstBadVersion(2)
print(ans)
