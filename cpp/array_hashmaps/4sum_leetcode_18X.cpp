#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<long long>> result;
        for (long long i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            vector<vector<long long>> threeSumResult = threeSum(nums, i + 1, target - nums[i]);
            for (auto& triplet : threeSumResult) {
                triplet.insert(triplet.begin(), nums[i]);
                result.push_back(triplet);
            }
        }
        return result;
    }

private:
    vector<vector<long long>> threeSum(vector<long long>& nums, long long start, long long target) {
        vector<vector<long long>> result;
        for (long long i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i - 1]) continue;
            vector<vector<long long>> twoSumResult = twoSum(nums, i + 1, target - nums[i]);
            for (auto& pair : twoSumResult) {
                pair.insert(pair.begin(), nums[i]);
                result.push_back(pair);
            }
        }
        return result;
    }

    vector<vector<long long>> twoSum(vector<long long>& nums, long long start, long long target) {
        unordered_map<long long, long long> seen;
        vector<vector<long long>> result;
        for (long long i = start; i < nums.size(); i++) {
            long long complement = target - nums[i];
            if (seen.count(complement) && seen[complement] == 1) {
                result.push_back({complement, nums[i]});
                seen[complement]++;
            } else if (!seen.count(nums[i])) {
                seen[nums[i]] = 1;
            }
        }
        return result;
    }
};

long long main() {
    Solution solution;
    
    vector<long long> nums1 = {1, 0, -1, 0, -2, 2};
    long long target1 = 0;
    vector<vector<long long>> result1 = solution.fourSum(nums1, target1);
    cout << "Example 1:" << endl;
    cout << "Input: nums = [1,0,-1,0,-2,2], target = 0" << endl;
    cout << "Output: [";
    for (auto& quad : result1) {
        cout << "[";
        for (long long i = 0; i < quad.size(); i++) {
            cout << quad[i];
            if (i < quad.size() - 1) cout << ",";
        }
        cout << "]";
    }
    cout << "]" << endl;

    vector<long long> nums2 = {2, 2, 2, 2, 2};
    long long target2 = 8;
    vector<vector<long long>> result2 = solution.fourSum(nums2, target2);
    cout << "Example 2:" << endl;
    cout << "Input: nums = [2,2,2,2,2], target = 8" << endl;
    cout << "Output: [";
    for (auto& quad : result2) {
        cout << "[";
        for (long long i = 0; i < quad.size(); i++) {
            cout << quad[i];
            if (i < quad.size() - 1) cout << ",";
        }
        cout << "]";
    }
    cout << "]" << endl;

    return 0;
}

