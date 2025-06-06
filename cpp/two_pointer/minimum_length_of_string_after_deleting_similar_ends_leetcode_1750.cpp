#include <iostream>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
     int l = 0, r = s.size() - 1;
     while(l < r && s[l] == s[r]){
       auto ch = s[l];
       while(l <= r && s[l] == ch ){
         l++;
       } 
       while(l < r && s[r] == ch){
         r--;
       }
     }
     return r - l + 1;
    }
};
