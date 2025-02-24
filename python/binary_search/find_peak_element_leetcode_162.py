class Solution(object):
    def findPeakElement(self, nums):
        if len(nums) == 1 or nums[0] > nums[1]:
            return 0
        if nums[-1] > nums[-2]:
            return len(nums) - 1

        l, r = 0, len(nums) - 1
        while(l <= r):
            mid = l + (r-l)//2
            if nums[mid] > nums[mid-1] and nums[mid] > nums[mid + 1]:
                return mid
            elif nums[mid+1] > nums[mid]:
                l = mid+1
            else:
                r = mid-1

sol = Solution()
a = [1,2,3,1]
a = [1,2,1,3,5,6,4]
a = [3,4,3,2,1]
ans = sol.findPeakElement(a)
print(ans)
