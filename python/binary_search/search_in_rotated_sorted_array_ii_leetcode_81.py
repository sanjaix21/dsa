from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> bool:
        # TODO: Implement this method

        l, r  = 0,  len(nums) - 1
        while (l < r):
            mid = l + (r - l)//2 
            if nums[mid] == target:
                return True
            elif nums[l] == nums[mid] and nums[mid] == nums[r]:
                l += 1
                r -= 1

            elif nums[l] <= nums[mid]:
                if nums[l] <= target and nums[mid] >= target:
                    r = mid-1
                else:
                    l = mid+1
            elif nums[r] >= nums[mid]:
                if nums[r] >= target and nums[mid] <= target:
                    l = mid+1
                else:
                    r = mid-1

        return False

if __name__ == "__main__":
    # Example 1
    nums1 = [2, 5, 6, 0, 0, 1, 2]
    target1 = 0
    print("Output 1:", Solution().search(nums1, target1))  # Expected: True

    # Example 2
    nums2 = [2, 5, 6, 0, 0, 1, 2]
    target2 = 3
    print("Output 2:", Solution().search(nums2, target2))  # Expected: False

