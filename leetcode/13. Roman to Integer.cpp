class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> symbolToValue = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int result = 0;

        for (int i = 0; i < s.length(); ++i) {

            if (i < s.length() - 1 && symbolToValue[s[i]] < symbolToValue[s[i + 1]]) {
                result -= symbolToValue[s[i]];
            } else {
                result += symbolToValue[s[i]];
            }
        }

        return result;
    }
};
