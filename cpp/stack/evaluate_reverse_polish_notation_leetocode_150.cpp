#include <iostream>
#include <typeinfo>
#include <string>
#include <stack>
#include <cctype>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> numbers;
        for(auto c : tokens){
          if(c != "+" && c != "-" && c != "*" && c != "/"){
            numbers.push(stoi(c));
          } else {
            int n2 = numbers.top();
            numbers.pop();
            int n1 = numbers.top();
            numbers.pop();
            int res;
            if(c == "+"){
              res = n1+n2;
            } else if (c == "/"){
              res = n1/n2;
            } else if (c == "-"){
              res = n1-n2;
            } else if (c == "*"){
              res = n1*n2;
            }
            numbers.push(res);
          }
          std::cout << numbers.top() << endl;

        }   
        return numbers.top();
    }
};

int main(){
  // vector<string> vec = {"4","13","5","/","+"} ;
  vector<string> vec = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
  Solution sol;
  int ans = sol.evalRPN(vec);
  std::cout << ans << std::endl;
}
