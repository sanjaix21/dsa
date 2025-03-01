##################### Non working Shit #########################

# class Solution(object):
#     def maxSubArray(self, nums):
#         ogstr = ''.join(list(map(str, nums)))
#         subs = subarray(nums)
#         subs.pop(0)
#         maxy = -999999
#         for sub in subs:
#             j = ''.join(list(map(str, sub)))
#             if j in ogstr:
#                 maxy = max(maxy, sum(sub))
#         return maxy
#
# def subarray(nums, index=0, curr=[], result=[]):
#     if len(nums) == index:
#         result.append(curr[:])
#         return
#     subarray(nums, index+1, curr, result)
#     curr.append(nums[index])
#     subarray(nums, index+1, curr, result)
#     curr.pop()
#
#     return result

############### Time Limit Error ##############################
# class solution(object):
#     def maxsubarray(self, nums):
#         if len(nums) == 1:
#             return nums[0]
#         maxy = -9999
#         for i in range(0, len(nums)):
#             tempsum = nums[i]
#             maxy = max(maxy, tempsum)
#             for j in range(i+1, len(nums)):
#                 tempsum += nums[j]
#                 maxy = max(maxy, tempsum)
#             maxy = max(maxy, tempsum)
#         return maxy

class Solution(object):
    def maxSubArray(self, nums):
        maxy = -999999
        currsum = 0
        for i in range(len(nums)):
            currsum += nums[i]
            if nums[i] > currsum:
                currsum = nums[i]
            maxy = max(maxy, currsum)
        return maxy
                

sol = Solution()
# a = [-2,1,-3,4,-1,2,1,-5,4]
# a = [-1]
# a = [-2, 1]
# a = [-1, -2]
# a = [1]
# a = [5,4,-1,7,8]
a = [1, 2]
ans = sol.maxSubArray(a)
print(ans)
