#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minEatingSpeed(vector<int>& piles, int h){
      int l = 1;
      int r = *max_element(piles.begin(), piles.end());
      int res = r;
      while(l <= r){
        int k = l + (r-l)/2;
        long long hours = 0;
        for(int pile : piles){
          hours += ceil(static_cast<double>(pile)/k);
          // if(hours > h){
          //   break;
          // }
        }

        if(hours > h){
          l = k+1;
        } else {
          res = k;
          r = k-1;
        }
      }
      return res;
    }
};

int main(){
  Solution sol;
  
  vector<int> vec = {30,11,23,4,20};
  std::cout << sol.minEatingSpeed(vec, 5);

}
