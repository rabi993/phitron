// class Solution {
// public:
//     bool isMatch(string s, string p) {
//         if (p.empty()) {
//             return s.empty();
//         }

//         bool firstMatch = (!s.empty() && (s[0] == p[0] || p[0] == '.'));

//         if (p.length() >= 2 && p[1] == '*') {
//             // Match zero or more occurrences of the preceding element
//             return (isMatch(s, p.substr(2)) || (firstMatch && isMatch(s.substr(1), p)));
//         } else {
//             // Match the next character in both strings
//             return firstMatch && isMatch(s.substr(1), p.substr(1));
//         }
//     }
// };



class Solution {
public:
    bool isMatch(string s, string p) {
        unordered_map<string, bool> memo;
        return dp(s, p, memo);
    }

private:
    bool dp(string s, string p, unordered_map<string, bool>& memo) {
        if (memo.find(s + "_" + p) != memo.end()) {
            return memo[s + "_" + p];
        }

        if (p.empty()) {
            return s.empty();
        }

        bool firstMatch = (!s.empty() && (s[0] == p[0] || p[0] == '.'));

        if (p.length() >= 2 && p[1] == '*') {
            // Match zero or more occurrences of the preceding element
            bool result = dp(s, p.substr(2), memo) || (firstMatch && dp(s.substr(1), p, memo));
            memo[s + "_" + p] = result;
            return result;
        } else {
            // Match the next character in both strings
            bool result = firstMatch && dp(s.substr(1), p.substr(1), memo);
            memo[s + "_" + p] = result;
            return result;
        }
    }
};
