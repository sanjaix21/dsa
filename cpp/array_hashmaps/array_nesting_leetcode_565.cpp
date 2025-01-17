#include <iostream>

#include <vector>
using namespace std;

class Solution {
public:
    int arrayNesting(vector<int>& nums) {
       int maxy = 0;
       for(int i = 0; i < nums.size(); i++){
           if(nums[i] != -1){
               int j = i;
               int count = 0;
               while(nums[j] != -1){
                   count += 1;
                   int k = nums[j];
                   nums[j] = -1;
                   j = k;
               }
               maxy = max(maxy, count);
               if(maxy == nums.size()){
                   return maxy;
               }
           }
       }
       return maxy;
    }
};

int main(){
    Solution sol;
    vector<int> vec = {5,4,0,3,1,6,2};
    vector<int> v = {0, 1, 2};
    int ans = sol.arrayNesting(v);
    std::cout << ans;
}
