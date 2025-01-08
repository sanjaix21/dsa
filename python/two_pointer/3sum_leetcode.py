class Solution:
    resx = []
    def twoSum(self, nums, target):
        for i, a in enumerate(nums):
            rem = target - a
            try:
                j = nums.index(rem)
                if i != j:
                    resx.append((target, a, rem))
            except ValueError:
                continue
        return (0, )
    
    def threeSum(self, nums):
        nums.sort()
        results = []
        for i, a in enumerate(nums):
            res = self.twoSum(nums[i+1:], -a)
        return self.resx  

if __name__ == "__main__":
    solution = Solution()
    nums = [-1, 0, 1, 2, -1, -4]
    result = solution.threeSum(nums)
    print(result)
