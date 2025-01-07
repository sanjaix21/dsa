// using vector

/*
 
#include <bits/stdc++.h>
class MinStack {
  private: 
    std::vector<int> stack;
  public:
    MinStack(){}

    void pop(){
      if(!stack.empty()){
        stack.pop_back();
      } else {
        std::cout<<("stack is empty\n");
      }
    }

    void push(int item){
      stack.push_back(item);
    }

    int top(){
      if(!stack.empty()){
        return stack.back();
      } throw std::runtime_error("stack is empty");
    }

    int getMin(){
      if(!stack.empty()){
        return *min_element(stack.begin(), stack.end());
      } throw std::runtime_error("stack is empty");
    }
};

*/

// using stack
#include <iostream>
#include <stack>
#include <algorithm>

class MinStack{
  private:
    std::stack<int> stack;
    std::stack<int> minstack;

  public:
    MinStack(){}

    void push(int item){
      stack.push(item);

      if(minstack.empty() || item < minstack.top()){
        minstack.push(item);
      } else {
        minstack.push(minstack.top());
      }
    }

    void pop(){
      stack.pop();
      minstack.pop();
    }

    int top(){
      return stack.top();
    }

    int getMin(){
      return minstack.top(); 
    }
};



