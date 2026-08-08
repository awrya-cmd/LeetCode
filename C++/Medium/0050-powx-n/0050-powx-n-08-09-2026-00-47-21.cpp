class Solution {
public:
    double myPow(double x, int n) {

        long long N = n;

        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        double ans = 1;

        while (N > 0) {

            // If current bit is 1
            if (N % 2 == 1) {
                ans *= x;
            }

            // Square x
            x *= x;

            // Divide N by 2
            N /= 2;
        }

        return ans;
    }
};