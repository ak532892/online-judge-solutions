class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int res = nums[size-1] * nums[size-2] * nums[size-3];
        res = max(res, nums[0]*nums[1]*nums[size-1]);
        return res;
    }
};
// Single Scan