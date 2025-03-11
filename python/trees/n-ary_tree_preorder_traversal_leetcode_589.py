# Definition for a Node.
class Node:
    def __init__(self, val = None, children = None):
        self.val = val
        self.children = children

class Solution(object):
    ans = []
    def preorder(self, root):
        """
        :type root: Node
        :rtype: List[int]
        """
        self.rootbaby(root)
        myans = self.ans[:]
        self.ans.clear()
        return myans 
    def rootbaby(self, root):
        if not root:
            return
        self.ans.append(root.val)
        if root.children:
            # print(list(root.children))
            for child in root.children:
                self.rootbaby(child)
def main():
    # Test case 1
    root1 = Node(1, [
        Node(3, [Node(5), Node(6)]),
        Node(2),
        Node(4)
    ])
    sol = Solution()
    print("Output for Test Case 1:", sol.preorder(root1))

    # Test case 2
    root2 = Node(1, [
        Node(2, [
            Node(3),
            Node(4, [
                Node(5, [
                    Node(6, [Node(7)]),
                    Node(8, [Node(9, [Node(10)]), Node(11)])
                ])
            ])
        ])
    ])
    print("Output for Test Case 2:", sol.preorder(root2))

if __name__ == "__main__":
    main()

