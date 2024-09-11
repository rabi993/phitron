
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> frequencyMap;
        int maxFrequency = 0;


        for (int num : nums) {
            frequencyMap[num]++;
            maxFrequency = max(maxFrequency, frequencyMap[num]);
        }

        int totalCount = 0;

        for ( auto & pair : frequencyMap) {
            if (pair.second == maxFrequency) {
                totalCount += pair.second;
            }
        }

        return totalCount;
    }
};
