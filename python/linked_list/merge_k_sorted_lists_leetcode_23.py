## Brute Force Way
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def mergeKLists(self, lists):
        """
        :type lists: List[Optional[ListNode]]
        :rtype: Optional[ListNode]
        """
        # Write your logic here
        dummy = ListNode()
        current = dummy
        while any(lists):
            min_val = float('inf')
            min_ind = -1
            for i, node in enumerate(lists):
                if node and node.val < min_val:
                    min_val = node.val
                    min_ind = i

            if min_ind == -1:
                break
            current.next = lists[min_ind]
            current = current.next

            lists[min_ind] = lists[min_ind].next
            if not lists[min_ind]:
                lists[min_ind] = None
        return dummy.next


# Helper function to convert a list into a linked list
def list_to_linked_list(arr):
    if not arr:
        return None
    head = ListNode(arr[0])
    current = head
    for val in arr[1:]:
        current.next = ListNode(val)
        current = current.next
    return head

# Helper function to print a linked list
def print_linked_list(head):
    result = []
    while head:
        result.append(head.val)
        head = head.next
    print(result)

# Main block
if __name__ == "__main__":
    lists = [[1,4,5], [1,3,4], [2,6]]
    
    # Convert each list to a ListNode linked list
    linked_lists = [list_to_linked_list(l) for l in lists]

    solution = Solution()
    merged_head = solution.mergeKLists(linked_lists)

    print("Merged Sorted Linked List:")
    print_linked_list(merged_head)

