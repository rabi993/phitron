
class Solution {
public:
    int divide(long long int dividend, long long int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        if (dividend < 0 && divisor < 0) {
            long long int result = (-dividend) / (-divisor);
            return result;
        } else if (dividend < 0 || divisor < 0) {
            long long int result = dividend / divisor;
            return result;
        }

        long long int result = dividend / divisor;
        return result;
    }
};

