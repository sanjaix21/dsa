from collections import deque
# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# BFS
# class Solution(object):
#     def maxDepth(self, root):
#         if not root:
#             return None
#         level = 0
#         de = deque([root])
#         while de:
#             for i in range(len(de)):
#                 node = de.popleft()
#                 if node.left:
#                     de.append(node.left)
#                 if node.right:
#                     de.append(node.right)
#             level += 1
#         return level
                
# Recurssive DFS
# class Solution(object):
#     def maxDepth(self, root):
#         """
#         :type root: Optional[TreeNode]
#         :rtype: int
#         """
#         leftmax = 0
#         rightmax = 0
#         if root:
#             leftmax += self.maxDepth(root.left) + 1
#             rightmax += self.maxDepth(root.right) + 1
#
#         return max(leftmax, rightmax)

### Iterative DFS
class Solution(object):
    def maxDepth(self, root):
        stack = [[root, 1]]
        res = 0
        while stack:
            node, depth = stack.pop()
            if node:
                res = max(res, depth)
                stack.append([node.left, depth+1])
                stack.append([node.right, depth+1])
        return res

if __name__ == "__main__":
    # Constructing the binary tree from the given list [3,9,20,null,null,15,7]
    root = TreeNode(3)
    root.left = TreeNode(9)
    root.right = TreeNode(20)
    root.right.left = TreeNode(15)
    root.right.right = TreeNode(7)
    
    # Creating Solution instance and calling maxDepth
    solution = Solution()
    result = solution.maxDepth(root)
    print("Max Depth of the Binary Tree:", result)
