class Solution{
    private:
        int binary_search(int start, int end, vector<int> nums, int target){
            if (start > end){
                return -1;
            }

            int mid = start + (end-start)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                return binary_search(start, mid-1, nums, target);
            }

            return binary_search(mid+1, end, nums, target);
    }
    public:
        int search(vector<int>& nums, int target) {
            return this->binary_search(0, nums.size()-1, nums, target);
    }
};
