/* initial
#include <iostream>
struct ListNode{
  int val;
  ListNode *next;
  ListNode(): val(0), next(nullptr) {}
  ListNode(int x): val(x), next(nullptr) {}
  ListNode(int x, ListNode *next): val(x), next(next) {}
};

class Solution {
  public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
      ListNode* h1 = l1;
      ListNode* h2 = l2;
      ListNode dummy(0);
      ListNode* ans = &dummy;
      while (h1 != nullptr && h2 != nullptr) {
        if(h1->val < h2->val){
            ans->next = h1;
            h1 = h1->next;
        } else {
          ans->next = h2;
          h2 = h2->next;
        }
        ans = ans->next;
      }
      if(h1 != nullptr){
        ans->next = h1;
      } else if(h2 != nullptr){
        ans->next = h2;
      }
      return dummy.next;
    }
};

int main(){
  ListNode* a = new ListNode(4);
  ListNode* b = new ListNode(2, a);
  ListNode* c = new ListNode(1, b);

  ListNode* x = new ListNode(5);
  ListNode* y = new ListNode(3, x);
  ListNode* z = new ListNode(1, y);

  Solution sol;
  ListNode* final = sol.mergeTwoLists(c, z);
  while(final != nullptr){
    std::cout << final->val << "->";
    final = final->next;
  } 
}
*/

class Solution{
  public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
      ListNode dummy(0);
      ListNode* tail = &dummy;
      while(l1 != nullptr && l2 != nullptr){
        if(l1->val < l2->val){
          tail->next = l1;
          l1 = l1->next;
        } else {
          tail->next = l2;
          l2 = l2->next;
        }
        tail = tail->next;
      }
      if(l1 != nullptr){
        tail->next = l1;
      } else {
        tail->next = l2;
      }

      return dummy.next;
    }
};
