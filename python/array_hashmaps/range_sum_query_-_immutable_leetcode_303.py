class NumArray(object):
    nums = []
    def __init__(self, nums):
        """
        :type nums: List[int]
        """
        self.nums = nums[0][0]
        

    def sumRange(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: int
        """
        return sum(self.nums[left:right+1])
        


# Your NumArray object will be instantiated and called as such:
nums = [[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
obj = NumArray(nums)
param_1 = obj.sumRange(0,5)
print(param_1)


