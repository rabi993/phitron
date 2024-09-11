

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if (nums.size() <= 1) {
            return nums;  // Already sorted or empty
        }

        int mid = nums.size() / 2;
        vector<int> left(nums.begin(), nums.begin() + mid);
        vector<int> right(nums.begin() + mid, nums.end());


        left = sortArray(left);
        right = sortArray(right);

        // Merge the sorted halves
        return merge(left, right);
    }

private:
    vector<int> merge(vector<int>& left, vector<int>& right) {
        vector<int> result;
        int i = 0, j = 0;

        // Merge sorted left and right halves
        while (i < left.size() && j < right.size()) {
            if (left[i] < right[j]) {
                result.push_back(left[i]);
                i++;
            } else {
                result.push_back(right[j]);
                j++;
            }
        }

        while (i < left.size()) {
            result.push_back(left[i]);
            i++;
        }

        while (j < right.size()) {
            result.push_back(right[j]);
            j++;
        }

        return result;
    }
};



