class Solution(object):
    def searchMatrix(self, matrix, target):
        valid_mat = self.find_vec(0, len(matrix) - 1, matrix, target)
        return self.binary_search(0, len(valid_mat) - 1, valid_mat, target)
    def find_vec(self, start, end, board, target):
        if start > end:
            return []
        mid = start + (end -  start) // 2
        l = board[mid][0]
        r = board[mid][len(board[mid])-1]
        if l <= target and r >= target:
            return board[mid]
        elif l > target:
            return self.find_vec(start, mid-1, board, target)
        return self.find_vec(mid+1, end, board, target)

    def binary_search(self, start, end, nums, target):
        if start > end:
            return False
        mid = start + (end - start) // 2
        if nums[mid] == target:
            return True
        elif nums[mid] > target:
            return self.binary_search(start, mid-1, nums, target)
        return self.binary_search(mid+1, end, nums, target)


if __name__ == "__main__":
    matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]]
    sol = Solution()
    print(sol.searchMatrix(matrix, 3))
