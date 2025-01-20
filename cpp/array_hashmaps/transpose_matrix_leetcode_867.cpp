#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       int n = matrix[0].size() - 1;
       int m = matrix.size() - 1;
       vector<vector<int>> ans(n, vector<int> (m));
       for(int i = 0 ; i < m; i++){
         for(int j = 0; j < n; j++){
           ans[j][i] = matrix[i][j];
         }
       }
       return ans;
    }
};

int main(){
  vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
  Solution sol;
  sol.transpose(v);
  for(int i = 0; i < v.size(); i++){
    for(int j = 0; j < v.size(); j++){
      std::cout << v[i][j] << " ";
    }
  }

}
