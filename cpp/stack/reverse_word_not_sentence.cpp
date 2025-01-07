#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
  string my_str = "attending mock interview";
  stack<string> my_stack;
  string builder = "";
  for(int i = my_str.size() - 1; i >= 0; i--){
    if(my_str[i] != ' '){
      builder += my_str[i];
    } else {
      my_stack.push(builder);
      builder = "";
    }
  }
  my_stack.push(builder);
  while(!my_stack.empty()){
    std::cout << my_stack.top() << " ";
    my_stack.pop();
  }
}
