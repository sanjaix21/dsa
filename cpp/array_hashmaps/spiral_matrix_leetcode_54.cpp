#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int> ans;
       int m = matrix.size();
       int n = matrix[0].size();

       int up = 0, down = m - 1;
       int left = 0, right = n - 1;
       while(up <= down && left <= right){
         for(int i = left; i <= right; i++){
           ans.push_back(matrix[up][i]);
         }
         up++;

         for(int i = up; i <= down; i++){
           ans.push_back(matrix[i][right]);
         }
         right--;

         if(up <= down){
           for(int i = right; i >= left; i--){
             ans.push_back(matrix[down][i]);
           }
         }
         down--;

         if(left <= right){
           for (int i = down; i >= up; i--) {
            ans.push_back(matrix[i][left]);
           }
           left++;
         }
       }
       return ans;
    }
};

int main(){
  vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
  Solution sol;
  vector<int> ans = sol.spiralOrder(v);
  for(int i : ans){
    std::cout << i << " ";
  }
}
