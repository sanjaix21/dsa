class Solution(object):
    def applyOperations(self, nums):
        zc = 0
        curr = -1
        l, r = 0, 1
        while(r < len(nums)):
            # if nums[l] == 0:
            #     nums[l], nums[r] = nums[r], nums[l]
            if nums[l] == nums[r]:
                nums[l] *= 2
                nums[r] = 0
            l += 1
            r += 1
        l, r = 0, 1
        print(nums)
        while(r < len(nums)):
            while(r < len(nums) - 1 and nums[l] == 0 and nums[r] == 0):
                r += 1
            if(nums[l] == 0 and nums[r] != 0):
                nums[l], nums[r] = nums[r], nums[l]
            l += 1
            r += 1
        return nums 

sol = Solution()
a = [1,2,2,1,1,0]
# a = [0,1]
a = [847,847,0,0,0,399,416,416,879,879,206,206,206,272]
ans = sol.applyOperations(a)
print(ans)

