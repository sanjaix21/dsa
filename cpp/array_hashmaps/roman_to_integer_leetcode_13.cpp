#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> my_map = {
          {'I' , 1},
          {'V' , 5},
          {'X' , 10},
          {'L' , 50},
          {'C' , 100},
          {'D' , 500},
          {'M' , 1000}
        };

        int prev = 1001;
        int ans = 0;
        for(char c : s){
            int n = my_map[c];
            if (prev < n) {
              ans -= prev;
              n -= prev;
              ans += n;
            } else { 
            ans += n;
            prev = n;
            }
            printf("c : %c, n : %d, prev: %d, ans: %d\n",c , n, prev, ans);
        }
        return ans;
    }
};

int main() {
  string s = "MCMXCIV";
  Solution sol;
  int ans = sol.romanToInt(s);
  std::cout << ans;
}
