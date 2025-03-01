class Solution(object):
    def check(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        if len(nums) == 0:
            return True
        nums.append(nums[0])
        bump = 0
        prev = nums[0]
        for i in range(1, len(nums)):
            if nums[i] < prev:
                bump += 1
            if bump > 1:
                return False
            prev = nums[i]
        return True
            
sol = Solution()
# a = [2,1,3,4]
a = [3, 2, 1]
a = [1, 2,3]
# a = [3,4,5,1,2]
ans = sol.check(a)
print(ans)
