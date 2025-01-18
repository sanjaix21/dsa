#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int l = 0, r = nums.size();

      while(l < r){
        int mid = l + (r-l)/2;
        if(nums[mid] == target){
          return mid;
        } else if(nums[mid] < target){
          l = mid + 1;
        } else {
          r = mid;
        }
      }
      return l;
    }
};

int main(){
  vector<int> vec = {1,3,5,6};
  int target = 2;
  Solution sol;
  int ans = sol.searchInsert(vec, target);
  std::cout << ans;
}
