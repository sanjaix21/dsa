#include <bits/stdc++.h>
using namespace std;
class Solution{
  private:
    stack<char> st;
    vector<string> res;
    int n;

    string concat_stack(stack<char> stk){
      string s = "";
      stack<char> rvstk;
      while(!stk.empty()){
        rvstk.push(stk.top());
        stk.pop();
      }
      while(!rvstk.empty()){
        s += rvstk.top();
        rvstk.pop();
      }
      cout << s << ", ";
      return s;
    }       

    void backtrack(int openN, int closeN){
      if(openN == closeN && closeN == this->n){
        res.push_back(this->concat_stack(this->st));  
      } 

      if(openN < this->n){
        this->st.push('(');
        backtrack(openN+1, closeN);
        this->st.pop();
      }

      if(closeN < openN){
        this->st.push(')');
        backtrack(openN, closeN+1);
        this->st.pop();
      }
    }

  public:
    vector<string> generateParenthesis(int n) {
      this->n = n;
      this->backtrack(0, 0);
      return res;
    }
};

int main(){
  Solution sol;
  cout<<"[";
  int n;
  cin >> n;
  for(string s : sol.generateParenthesis(n)){
    cout << s << ",";
  }
  cout << "]";
}
