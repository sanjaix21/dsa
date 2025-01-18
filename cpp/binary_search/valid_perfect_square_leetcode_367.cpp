#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
      if(num < 1) return false;
      long long l = 1, r = num;
      while(l <= r){
        long long mid = l + (r - l)/2;
        long long sq = mid*mid;
        if(sq == num) return true;
        if(sq < num){
          l = mid+1;
        } else {
          r = mid-1;
        }
      }
      return false;
    }
};

int main(){
  int n = 16;
  Solution sol;
  bool ans  = sol.isPerfectSquare(n);
  std::cout << ans << endl;
}
