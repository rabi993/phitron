// class Solution {
// public:
//     double myPow(double x, int n) {
//         if (n == 0) {
//             return 1.0;
//         }
//         int flag;
//         if (x<0 ){
//             if (n%2==0){
//                 x *=-1;
//                 flag=1;
//             }
//             else if(n%2==1){
//                 x *=-1;
//                 flag=0;
//             }


//         }
//         // Handle negative exponent
//         if (n < 0) {
//             x = 1 / x;
//             // Handle overflow for INT_MIN
//             if (n == INT_MIN) {
//                 x *= x;
//                 n++;
//             }
//             n = -n;
//         }

//         double result = 1.0;
//         while (n > 0) {

//             if (n % 2 == 1) {
//                 // Check for very small values to adjust precision
//                 if (result < numeric_limits<double>::epsilon()) {
//                     return 0.0;
//                 }
//                 result *= x;
//             }
//             x *= x; // Square x for the next iteration
//             n /= 2; // Halve the exponent
//         }
//         if ( flag==0){
//             result *=-1;
//         }

//         return result;
//     }
// };

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1.0;
        }

        int flag = 1;

        if (x < 0) {
            if (n % 2 == 0) {
                x *= -1;
                flag = 1;
            } else if (n % 2 == 1) {
                x *= -1;
                flag = 0;
            }
        }

        // Handle negative exponent
        if (n < 0) {
            x = 1 / x;
            // Handle overflow for INT_MIN
            if (n == INT_MIN) {
                x *= x;
                n++;
            }
            n = -n;
        }

        double result = 1.0;

        while (n > 0) {
            if (n % 2 == 1) {
                // Check for very small values to adjust precision
                if (abs(result) < numeric_limits<double>::epsilon()) {
                    return 0.0;
                }
                result *= x;
            }
            x *= x; // Square x for the next iteration
            n /= 2; // Halve the exponent
        }

        if (flag == 0) {
            result *= -1;
        }

        return result;
    }
};

//1 testcase not passed
