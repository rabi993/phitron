// public:
//     bool isPalindrome(int x) {
//         // Handle negative numbers or numbers ending with 0 (excluding 0 itself)
//         if (x < 0 || (x % 10 == 0 && x != 0)) {
//             return false;
//         }

//         int reversed = 0;
//         int original = x;

//         while (x > 0) {
//             int digit = x % 10;
//             x /= 10;

//             // Check for overflow before updating the reversed value
//             if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > INT_MAX % 10)) {
//                 return false;
//             }

//             reversed = reversed * 10 + digit;
//         }

//         return original == reversed;
//     }
// };

class Solution {
public:
    bool isPalindrome(int x) {

        string str = to_string(x);

        // Use two pointers to check for palindrome
        int left = 0, right = str.length() - 1;

        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};

