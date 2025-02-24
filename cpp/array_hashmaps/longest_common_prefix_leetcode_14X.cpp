#include <iostream>
using namespace std;
#include <string>
#include <vector>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string ans = strs[0];
      for(int i = 1; i < strs.size(); i++){
        int k = 0;
        string tmp = "";
        while(ans[k] == strs[i][k] && k < ans.size()){
          tmp += ans[k];
          k++;
        }
        // printf("%s \n", ans);
        ans = tmp;
      }
      return ans;
    }
};

int main() {
  vector<string> strs = {"","",""};
  Solution sol;
  string ans = sol.longestCommonPrefix(strs);
  std::cout << ans;
}
