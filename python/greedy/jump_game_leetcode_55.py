class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        i = 0
        jump = 0
        for i in range(len(nums)):
            if i <= jump:
                jump = max(i + nums[i], jump)
            else:
                return False
        return True
# class Solution {
# public:
#     bool canJump(vector<int>& nums) {
#         int n = nums.size();
#         int i = 0;
#         for(int reach = 0; i < n && i <= reach; i++){
#             reach = max(i + nums[i], reach);
#         }
#         return i == n;
#     }
# };

# a = [2,3,1,1,4]
a = [3,2,1,0,4]
sol = Solution()
ans = sol.canJump(a)
print(ans)
