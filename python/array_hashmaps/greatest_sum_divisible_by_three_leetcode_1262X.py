class Solution(object):
    def maxSumDivThree(self, nums):
        nums = sorted(nums)
        sumy = sum(nums)
        if sumy%3 == 0:
            return sumy
        l, r =0, 0
        for i in nums:
            temp = sumy
            temp -= i
            if temp%3 == 0:
                return temp
a = [3,6,5,1,8]
a = [1,2,3,4,4]
sol = Solution()
ans = sol.maxSumDivThree(a)
print(ans)
