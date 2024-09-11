class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.empty()) {
            return 0;
        }

        int i = 0, j = 1;


        while (j < nums.size()) {

            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
            j++;
        }
        i++;
        return i ;
    }
};



