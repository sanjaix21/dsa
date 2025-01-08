#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      vector<int> ans;
      for(int i = 0, j = numbers.size() - 1; i < j; ){
        int currsum = numbers[i] + numbers[j];
        if(currsum == target){
          ans.push_back(++i);
          ans.push_back(++j);
          break;
        } else if (currsum > target){
          j--;
        } else {
          i++;
        }
      }
      return ans;
    }
};

void print_vec(vector<int> nums){
  std::cout << "{";
  for (int n: nums){
    std::cout << n << " ";
  }
  std::cout << "}\n";
}
int main(){
  vector<int> vec = {2,7,11,15};
  Solution sol;
  print_vec(sol.twoSum(vec, 9));

}
