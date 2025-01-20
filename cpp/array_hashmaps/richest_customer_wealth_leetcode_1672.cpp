#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int ans = 0;
       for(auto i : accounts){
         ans = max(ans, accumulate(i.begin(), i.end(), 0));
       }
       return ans;
    }
};

int main() {
  vector<vector<int>> vec = {{1,2,3},{3,2,1}};
  Solution sol;
  int ans = sol.maximumWealth(vec);
  std::cout << ans << endl;
}
