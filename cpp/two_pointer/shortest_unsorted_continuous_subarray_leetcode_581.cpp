#include <bits/stdc++.h>
using namespace std;
/* Failed V1 
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
      int l = 0, r = 1;
      int low = -1;
      int high = 0;
      int unsorted = 0;
      while(r < nums.size()){
        int initial = -1;
        if(nums[l] == nums[r] && initial == -1){
          initial = l;
        }
        if(nums[l] > )
        if(nums[l] > nums[r]){
          if(low == -1){
            low = l;
            unsorted = 1;
          }
          high = r;
          int temp = nums[l];
          nums[l] = nums[r];
          nums[r] = temp;
        }
        l++;
        r++;
      }
      if (low == -1) return 0;
      return high - low + unsorted;
    }
};
*/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
      if(nums.size() <= 1){
        return 0;
      }
      int n = nums.size();
      int start = -1, end = -1;
      int lmax = INT_MIN, rmin = INT_MAX;
      for(int i = 0; i < nums.size(); i++){
        lmax = max(lmax, nums[i]);
        if(nums[i] < lmax) end = i;

        rmin = min(rmin, nums[n - i - 1]);
        if(rmin < nums[n - i - 1]) start = n - i - 1;
      }

      if (start == -1) return 0;
      return end - start + 1;
    }
};

int main(){
  vector<int> vec = {2,6,4,8,10,9,15};
  // vector<int> vec = {1, 2,3,4};
  Solution sol;
  int ans = sol.findUnsortedSubarray(vec);
  std::cout << ans << endl;
}
