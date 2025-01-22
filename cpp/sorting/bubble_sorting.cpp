#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int>& vec){
  int n = vec.size();
  for(int i = 0 ; i < n; i++){
    for(int j = 1; j < n; j++){
      if(vec[j-1] > vec[j]){
        swap(vec[j-1], vec[j]);
      }
    }
  }
}

int main(){
  vector<int> vec = {9 ,3 ,5, 2, 1, 0, 3, 5, 2,3,6, 6};
  bubble_sort(vec);
  for(int var : vec) {
    std::cout << var << endl;
  }
}
