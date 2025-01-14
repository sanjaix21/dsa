class Solution(object):
    def mergeTwoLists(self, list1, list2):
      dummy = ListNode()
      test = dummy

      while list1 and list2:
        if list1.val < list2.val:
          test.next = list1
          list1 = list1.next
        else:
          test.next = list2
          list2 = list2.next
        test = test.next
      if list1:
        test.next  =list1
      else:
        test.next = list2

      return dummy.next
      
