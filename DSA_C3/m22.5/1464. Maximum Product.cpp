// #include <bits/stdc++.h>
// using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int firstMax = 0;  // Largest element
        int secondMax = 0; // Second largest element

        for (int num : nums) {
            if (num > firstMax) {
                secondMax = firstMax;
                firstMax = num;
            }
            else if (num > secondMax) {
                secondMax = num;
            }
        }


        return (firstMax - 1) * (secondMax - 1);
    }
};
