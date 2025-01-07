#include <bits/stdc++.h>
using namespace std;


class Solution{

  public: 
    bool isPalindrome(string s){
      s = remove_specials(s);
      for(int i = 0, j = s.size() - 1; i <= j; i++, j--){
        if(tolower(s[i]) != tolower(s[j])){
          printf("turned false her at i: %d->%c, j: %d->%c, \n", i, s[i], j, s[j]);
          return false;
        }
      }
      return true;
    }

  private:
    string remove_specials(string s){
      string string_without_specials = "";
      for(char c: s){
        if(isalnum(c)){
          string_without_specials += c;
        }
      }
      return string_without_specials;
    }
};

int main(){
  string input = "A man, a plan, ah canal: Panama";
  Solution sol;
  while(input != "x"){
  cout << sol.isPalindrome(input) << endl;
  getline(cin, input);
  }
}
