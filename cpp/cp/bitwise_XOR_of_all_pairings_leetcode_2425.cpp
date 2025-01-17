#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int xor1 = 0;
        int xor2 = 0;
        for(int x : nums1){
            xor1 ^= x;
        }

        for(int y : nums2){
            xor2 ^= y;
        }
        int ans = 0;
        if(nums1.size()%2){
            ans ^= xor2;
        }
        if(nums2.size()%2){
            ans ^= xor1;
        }
        return ans;
    }
};

int main(){
    clock_t start = clock();
    Solution sol;
    vector<int> n1 = {25,29,10,6};
    vector<int> n2 = {17,11,5,1,1,24,11,1,27};
    int ans = sol.xorAllNums(n1, n2);
    std::cout << ans << endl;
    clock_t end = clock();
    double duration = (double)(end - start)/CLOCKS_PER_SEC;
    std::cout << "Duration: " << duration;
}


