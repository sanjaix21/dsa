class Solution:
    def arrayNesting(self, nums) :
        maxy = 0
        for i in range(len(nums)):
            count = 0
            temp_ind = i
            while nums[temp_ind] != -1:
                count += 1
                # print(temp_ind, nums)
                j = nums[temp_ind]
                nums[temp_ind] = -1
                temp_ind = j 
            maxy = max(maxy, count)
            if maxy == len(nums):
                return maxy
        return maxy

if __name__ == "__main__":
    nums = [5,4,0,3,1,6,2]
    sol = Solution()
    ans  = sol.arrayNesting(nums)
    print(ans)
