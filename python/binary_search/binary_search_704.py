class Solution(object):
    def search(self, nums, target):
        return self.binary_search(nums, target, 0, len(nums)-1)
    
    def binary_search(self, nums, target, start, end):
        if start > end:
            return -1
        mid = start+(end-start)//2
        if nums[mid] == target:
            return mid
        elif nums[mid] > target:
            return self.binary_search(nums, target, start, mid-1)
        else:
            return self.binary_search(nums, target, mid+1, end)

if __name__ == "__main__":
   sol = Solution()
   print(sol.search([-1,0,3,5,9,12], 9) )
