class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        // Calculate the expected sum of all numbers from 0 to n
        int expectedSum = (n * (n + 1)) / 2;

        // Calculate the actual sum of elements in the array
        int actualSum = 0;
        for (int num : nums) {
            actualSum += num;
        }

        // Return the missing number
        return expectedSum - actualSum;
    }
};
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();

//         // XOR all numbers from 0 to n
//         int xorAll = 0;
//         for (int i = 0; i <= n; ++i) {
//             xorAll ^= i;
//         }

//         // XOR the result with all elements in the array
//         for (int num : nums) {
//             xorAll ^= num;
//         }

//         return xorAll;
//     }
// };
