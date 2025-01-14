#include <bits/stdc++.h>
struct ListNode {
  int val;
  ListNode* next;
  ListNode(): val(0), next(nullptr) {}
  ListNode(int x): val(x), next(nullptr) {}
  ListNode(int x, ListNode* next): val(x), next(next) {}
};

class Solution{
  public:
    bool hasCycle(ListNode* head) {
      unordered_map<ListNode*, int> my_map;
    while(head!=nullptr){
      my_map[head]++;
      if(my_map[head] > 1){
        return true;
      }
      head = head->next;
    }
    return false;
    }
};

