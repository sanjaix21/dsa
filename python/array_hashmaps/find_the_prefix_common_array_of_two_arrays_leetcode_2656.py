from collections import defaultdict
from typing import List
class Solution:
    def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
        counter = 0
        ans = []
        my_map = defaultdict()
        for i in range(len(A)):
            my_map[A[i]] = my_map.get(A[i], 0) + 1
            my_map[B[i]] = my_map.get(B[i], 0) + 1
            for val in my_map.values():
                counter += val // 2
            ans.append(counter)
            counter = 0
        return ans

if __name__ == "__main__":
    a = [1,3,2,4]
    b = [3,1,2,4]
    sol = Solution()
    c = sol.findThePrefixCommonArray(a, b)
    print(c)
