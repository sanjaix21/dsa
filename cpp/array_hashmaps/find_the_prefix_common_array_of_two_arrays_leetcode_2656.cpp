#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int counter = 0;
        vector<int> ans;
        unordered_map<int, int> my_map;
        for(int i = 0; i < A.size(); i++){
          my_map[A[i]]++;
          my_map[B[i]]++;
          for(auto iter: my_map){
            counter += iter.second/2;
          }
          ans.push_back(counter);
          counter = 0;
        }
        return ans;
    }
};

int main(){
  vector<int> a = {1,3,2,4};
  vector<int> b = {3,1,2,4};
  Solution sol;
  vector<int> c = sol.findThePrefixCommonArray(a, b);
  for(int i : c){
    std::cout << i << " ";
  }
}
