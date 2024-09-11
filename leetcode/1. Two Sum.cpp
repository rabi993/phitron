using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // Map to store elements and their indices

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            // Check if the complement is already in the map
            if (numMap.find(complement) != numMap.end()) {

                return {numMap[complement], i};
            }

            // Store the current element and its index in the map
            numMap[nums[i]] = i;
        }


        return {};
    }
};
