from keys import nums1, nums2
from collections import Counter
import time

# Start time
start_time = time.time()


######################################## Failed #################################
# class Solution(object):
#     def xorAllNums(self, nums1, nums2):
#         ans = 0
#         for i in nums1:
#             for j in nums2:
#                 ans ^= (i^j)
#         return ans

# class Solution(object):
#     def xorAllNums(self, nums1, nums2):
#         ans = 0
#         counter1 = Counter(nums1)
#         counter2 = Counter(nums2)
#         uniq1 = set(num for num, cnt in counter1.items() if cnt%2 == 1)
#         uniq2 = set(num for num, cnt in counter2.items() if cnt%2 ==  1)
#         # print(uniq2)
#         for x in uniq1:
#             for y in uniq2:
#                 ans ^= x^y
#         return ans

# class Solution(object):
#     def xorAllNums(self, nums1, nums2):
#         ans = 0
#         for x, y in zip(nums1, nums2):
#             print(x,y, ans)
#             ans ^= (x^y)
#         return ans
######################################## Failed #################################

class Solution(object):
    def xorAllNums(self, nums1, nums2):
        xor1 = 0
        xor2 = 0
        for x in nums1:
            xor1 ^= x

        for y in nums2:
            xor2 ^= y

        m, n = len(nums1), len(nums2)
        ans = 0
        if n % 2 == 1:  
            ans ^= xor1
        if m % 2 == 1:  
            ans ^= xor2
        return ans



if __name__ == "__main__":
    n1 = [25,29,10,6]
    n2 = [17,11,5,1,1,24,11,1,27]
    # n1 = [1,2]
    # n2 = [3,4]
    # n1 = nums1
    # n2 = nums2
    sol = Solution()
    ans = sol.xorAllNums(n1, n2)
    print(ans)

    end_time = time.time()

    # Calculate execution time in milliseconds
    execution_time_ms = (end_time - start_time) * 1000
    print(f"Execution time: {execution_time_ms:.2f} ms")
