#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      vector<int> valid_mat = find_vec(0, matrix.size() - 1, matrix, target);

      return(binary_search(0, valid_mat.size() - 1, valid_mat, target)); 
    }

    vector<int> find_vec(int start, int end, vector<vector<int>>& board, int target) {
      if (start > end){
        return {};
      }

      int mid = start + (end - start)/2;
      if(board[mid][0] <= target && board[mid][((board[mid]).size() - 1)] >= target){
        return board[mid];
      } else if (board[mid][0] > target){
        return find_vec(start, mid-1, board, target);
      } 
      return find_vec(mid+1, end, board, target);
    }

    bool binary_search(int start, int end, vector<int>& nums, int target){
      if(start > end){
        return false;
      }

      int mid = start + (end - start)/2;
      if(nums[mid] == target){
        return true;
      } else if (nums[mid] > target) {
       return binary_search(start, mid-1, nums, target);
      }
      return binary_search(mid+1, end, nums, target);
    }
};

int main(){
  Solution sol;
  std::vector<std::vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
  printf("{%d}\n", sol.searchMatrix(matrix, 10u));
}
