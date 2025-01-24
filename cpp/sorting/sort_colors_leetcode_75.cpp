class Solution {
public:
    void sortColors(vector<int>& nums) {
        int counts[] = {0, 0, 0};
        for(int i : nums){
            counts[i]++;
        }
        int k = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < counts[i]; j++){
                nums[k] = i;
                k++;
            }
        }
    }
};

