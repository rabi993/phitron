class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int nonZeroIndex = 0;

        // Iterate through the array and swap non-zero elements to the front
        for (int i = 0; i < n; ++i) {
            if (nums[i] != 0) {
                swap(nums[i], nums[nonZeroIndex]);
                nonZeroIndex++;
            }
        }
    }
};
