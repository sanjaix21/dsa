#include <bits/stdc++.h>

class Solution {
public:
    int longestValidParentheses(string s) {
        let maxLen = 0;
        stack<int> stk;
        stk.push(-1);
        for(int i = 0; i < s.size(); i++){
          if(s[i] == '('){
            stk.push(i);
          } else {
            stk.pop();
            if(stk.empty()){
              stk.push(i);
            } else {
              maxLen = max(maxLen, i - stk.top());
            }
          }
        }

        return maxLen;
    }
};
