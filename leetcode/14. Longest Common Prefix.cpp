
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        sort(strs.begin(), strs.end());

        // Compare the first and last strings in the sorted array
        int n = min(strs[0].size(), strs.back().size());
        int i = 0;

        while (i < n && strs[0][i] == strs.back()[i]) {
            ++i;
        }

        return strs[0].substr(0, i);
    }
};

// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         if (strs.empty()) {
//             return "";
//         }

//         // Iterate through characters of the first string
//         for (int i = 0; i < strs[0].size(); ++i) {
//             // Check if the character is the same in all strings
//             for (int j = 1; j < strs.size(); ++j) {
//                 if (i >= strs[j].size() || strs[j][i] != strs[0][i]) {
//                     // If not, return the prefix found so far
//                     return strs[0].substr(0, i);
//                 }
//             }
//         }

//         // If the loop completes, the entire first string is the common prefix
//         return strs[0];
//     }
// };
