class Solution {
public:
    vector<vector< int>> fourSum(vector<int>& nums,long long int target) {
        vector<vector<  int>> result;

        if (nums.size() < 4) {
            return result; // Not enough elements for a quadruplet
        }

        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n - 3; ++i) {
            // Skip duplicate elements for the first element
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            for (int j = i + 1; j < n - 2; ++j) {
                // Skip duplicate elements for the second element
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }

                long long int target_2sum = target - nums[i] - nums[j];
                 long long int left = j + 1;
                 long long int right = n - 1;

                while (left < right) {
                    long long int current_sum = nums[left] + nums[right];

                    if (current_sum == target_2sum) {
                        // Found a quadruplet
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});

                        // Skip duplicate elements for the third element
                        while (left < right && nums[left] == nums[left + 1]) {
                            left++;
                        }

                        // Skip duplicate elements for the fourth element
                        while (left < right && nums[right] == nums[right - 1]) {
                            right--;
                        }

                        left++;
                        right--;
                    } else if (current_sum < target_2sum) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }

        return result;
    }
};
