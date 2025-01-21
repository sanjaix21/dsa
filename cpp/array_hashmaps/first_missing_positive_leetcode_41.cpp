#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      int n = nums.size();
      for(int i = 0; i < n; i++){
        int x = nums[i];

        while(x >= 1 && x <= n && x != i+1 && x != nums[x-1]){
          swap(nums[x-1], nums[i]);
          x = nums[i];
        }
      }

      for(int i = 0; i < n; i++){
        if(nums[i] == i+1) continue;
        return i+1;
      }
      return n+1;
    }
};
int main(){
  vector<int> vec = {7,8,9,11,12};
  Solution sol;
  int ans = sol.firstMissingPositive(vec);
  std::cout << ans << endl;
}
