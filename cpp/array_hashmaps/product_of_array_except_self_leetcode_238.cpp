#include <bits/stdc++.h>
using namespace std;
/******************************     Failed     ********************************
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prod_vec;
        int prod = 1;
        bool contain_zero = false;
        for(int i : nums){
          if(i == 0){
            contain_zero = true;
            continue;
          }
          prod *= i;
        }
        for(int i = 0; i < nums.size(); i++){
          int woself;
          if(nums[i] == 0){
            woself = prod;
          } else if (contain_zero){
            woself = 0;
          } else {
            woself = prod/nums[i];
          }
          prod_vec.push_back(woself);
        }
        return prod_vec;
    }
};

******************************     Failed     ********************************/

/**********************     Working but not efficient     ********************
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int> prefix = {1};
       vector<int> suffix = {1};

       for(int i = 1; i < nums.size(); i++){
         int pre = nums[i-1]*prefix[i-1]; 
         prefix.push_back(pre);
         int suff = nums[nums.size()-i] * suffix[i-1];
         suffix.push_back(suff);
       }
      
       for(int i = 0; i < nums.size(); i++){
         prefix[i] *= suffix[nums.size() - i - 1];
       }
       return prefix;
    }
};

*********************     Working but not efficient     ********************/

class Solution{
  public:
  vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> output(n);
    output[0] = 1;
    for(int i = 1; i < n; i++){
      output[i] = output[i-1] * nums[i-1];
    }
    int right = 1;
    for(int i = n-1; i >= 0; i--){
      output[i] *=  right;
      right *= nums[i];
    }
    return output;
  }
};


int main(){
  vector<int> vec = {1,2,3,4};
  Solution sol;
  vector<int> ans = sol.productExceptSelf(vec);
  for(int i : ans){
    std::cout << i << " ";
  }
}
