#include <bits/stdc++.h>
using namespace std;

// Two Pointer Method O(N)
class Solution {
  
  public:
    int maxProfit(vector<int>& prices){
      int l = 0, r = 1;
      int maxP = 0;
      while(r < prices.size()){
        if(prices[l] < prices[r]){
          maxP = max(maxP, prices[r] - prices[l]);
        } else {
          l = r;
        }
        r++;
      }
    }
};

/* Using Dynamic Programming 

class Solution{
  public: 
    int maxProfit(vector<int>& prices){
      int maxP = 0;
      int minB = prices[0];
      for(int sel : prices){
        maxP = max(maxP, sel-minB);
        minB = min(sel, minB);
      }
      return maxP;
    }
};

*/ 
