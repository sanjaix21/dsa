class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        nums1.extend(nums2)
        nums1.sort()
        if len(nums1)%2:
            k = len(nums1)//2
            return nums1[k]
        else:
            k = len(nums1)//2
            m, n = nums1[k-1], nums1[k]
            return (m+n)/2.00

if __name__ == "__main__":
    n1 = [1, 2]
    n2 = [3, 4]

    sol = Solution()
    ans = sol.findMedianSortedArrays(n1, n2)
    print(ans)
