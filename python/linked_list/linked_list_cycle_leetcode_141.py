class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
      hasCycle = False
      fast = head
      slow = head
        
      while fast and fast.next:
        fast = (fast.next).next
        slow = slow.next
        if fast == slow:
          hasCycle = True
          break

      return hasCycle

