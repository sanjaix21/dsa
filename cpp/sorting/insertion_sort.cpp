#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    void insertionSort(vector<int>& arr){
      int n = arr.size();
      for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > key){
          arr[j+1] = arr[j];
          j--;
        }
        arr[j + 1] = key;
      }
    }
};

int main (int argc, char *argv[]) {
  vector<int> vec = {5, 6, 11, 12, 13 };
  Solution sol;
  sol.insertionSort(vec);
  for(int var : vec) {
    std::cout << var << endl;
  }
  return 0;
}
