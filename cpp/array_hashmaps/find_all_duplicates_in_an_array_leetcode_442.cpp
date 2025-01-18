#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
/*
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       vector<int> ans;
       unordered_map<int, int> my_map;
       for(int i : nums){
         my_map[i]++;
         if(my_map[i] > 1){
           ans.push_back(i);
         }
       }
      return ans;
    }
};
*/

class Solution{
  public:
    vector<int> findDuplicates(vector<int>& nums){
      vector<int> ans;
      for(int i = 0; i < nums.size(); i++){
        if(nums[i] < 0){
          ans.push_back(i);
        } else {
          int k = nums[i];
          nums[k] *= -1;
        }
      }
      return ans;
    }
};

int main(){
  vector<int> vec = {4,3,2,7,8,2,3,1};
  Solution sol;
  vector<int> ans = sol.findDuplicates(vec);
  for(int i: ans){
    std::cout << i << " ";
  }
}
