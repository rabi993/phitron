// class Solution {
// public:
//     int reverse(int x) {
//         int result = 0;

//         while (x != 0) {
//             int digit = x % 10;

//             // Check for overflow before updating the result
//             if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
//                 return 0;
//             }
//             if (result < INT_MIN / 10 || (result == INT_MIN / 10 && digit < -8)) {
//                 return 0;
//             }

//             result = result * 10 + digit;
//             x /= 10;
//         }

//         return result;
//     }
// };
class Solution {
public:
    int reverse(int x) {
        int reversed = 0;

        while (x != 0) {

            if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
                return 0;
            }

            reversed = reversed * 10 + x % 10;
            x /= 10;
        }

        return reversed;
    }
};
