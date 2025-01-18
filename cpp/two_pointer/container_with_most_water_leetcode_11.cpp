#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
       int l = 0, r = height.size() - 1;
       int ans = 0;
       while(l < r){
         int area = min(height[l], height[r]) * (r - l);
         ans = max(area, ans);
         if(height[l] < height[r]) {
           l++;
         } else if(height[r] < height[l]){
           r--;
         } else {
           l++;
           r--;
         } 
       }
       return ans;
    }
};

int main(){
  vector<int> h = {1,1};
  Solution sol;
  int ans = sol.maxArea(h);
  std::cout << ans << endl;

}
