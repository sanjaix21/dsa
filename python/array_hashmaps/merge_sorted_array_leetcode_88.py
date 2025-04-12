class Solution(object):
    def merge(self, nums1, m, nums2, n):
        i, j = 0, 0
        while i < len(nums1)  and j < len(nums2):
            if nums1[i] >= nums2[j] or i == m:
                temp = m
                while(temp > i):
                    nums1[temp] = nums1[temp-1]
                    temp -= 1
                nums1[i] = nums2[j]
                m += 1
                j += 1
            i += 1
        return nums1 

a =  [1,2,3,0,0,0]
b = [2,5,6]

sol = Solution()
ans = sol.merge(a, 3, b, 3)
print(ans)

