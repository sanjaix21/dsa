#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:

    int aggressiveCows(vector<int> &stalls, int k) {

       // Write your code here
      sort(stalls.begin(), stalls.end());
      int n = stalls.size();
      int high = stalls[n - 1] - stalls[0];
      int low = 0;
      int ans = 0;
      while(low <= high){
        int mid = low + (high - low)/2;
        if(isMax(stalls, k, mid)){
          low = mid+1;
          ans = mid;
        } else {
          high = mid-1;
        }
      }
      return ans;
    }

    bool isMax(vector<int> stalls, int k, int mid){
      int n = stalls.size();
      int prev = stalls[0];
      k--;
      for(int i = 1; i < n; i++){
        if(k == 0) break;
        if(stalls[i] - prev >= mid){
          prev = stalls[i];
          k--;
        }
      }
      return k == 0;
    }
};

int main() {
  vector<int> stalls = {1, 2, 4, 8, 9};
  Solution sol;
  int ans = sol.aggressiveCows(stalls, 3);
  std::cout << ans << endl;
}
