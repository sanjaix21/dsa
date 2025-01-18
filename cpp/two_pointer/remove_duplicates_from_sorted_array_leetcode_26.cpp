#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int l = 0, r = 1;
      while (r < nums.size()){
        if(nums[l] != nums[r]){
          l++;
          nums[l] = nums[r];
        }
        r++;
      }
      return l + 1;
    }
};

int main(){
  Solution sol;
  vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
  int ans = sol.removeDuplicates(nums);
  std::cout << ans << endl;
  for(int i : nums){
    std::cout << i << " ";
  }
}
