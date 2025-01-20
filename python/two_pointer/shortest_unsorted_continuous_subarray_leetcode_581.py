'''
This Doesn't work, check the same question in cpp/two_pointer
class Solution(object):
    def findUnsortedSubarray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        if n <= 1:
            return 0
        
        # Find the bounds of the unsorted subarray
        lmax, rmin = float('-inf'), float('inf')
        start, end = -1, -1
        
        for i in range(n):
            # From the left, find the last element smaller than the max seen so far
            lmax = max(lmax, nums[i])
            if nums[i] < lmax:
                end = i

            # From the right, find the last element greater than the min seen so far
            rmin = min(rmin, nums[n - i - 1])
            if nums[n - i - 1] > rmin:
                start = n - i - 1
        
        if start == -1:  # Array is already sorted
            return 0
        
        return end - start + 1

'''
class Solution(object):
    def findUnsortedSubarray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        lmax = 0
        rmin = 2**31
        l, r = 0, len(nums)-1
        low, high = -1, -1
        while(l <= r):
            cl = nums[l]
            cr = nums[r]
            if cl > cr:
                return r - l + 1;
            if lmax > cl and low == -1:
                low = l-1
            if rmin < cr and high == -1:
                high = r+1
            if low != -1 and high != -1:
                return high - low + 1

            lmax = max(lmax, cl)
            rmin = min(rmin, cr)
            l += 1
            r -= 1

        if low != -1 and high == -1:
            return 2
        return 0

if __name__ == "__main__":
    # n = [2,6,4,8,10,9,15] # 5
    # n = [1,2,3,4] # 0
    # n = [1, 2] # 0
    # n = [2, 1] # 2
    n = [1, 3, 2, 4, 5] # 2
    sol = Solution()
    ans = sol.findUnsortedSubarray(n)
    print(ans)
