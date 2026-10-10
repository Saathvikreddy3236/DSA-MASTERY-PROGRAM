class Solution {
public:
    double myPow(double x, int n) {
        long long exp = n;
        bool negative = exp < 0;

        if (negative)
            exp = -exp;

        double ans = 1.0;

        while (exp > 0) {
            if (exp % 2 == 1)
                ans *= x;

            x *= x;
            exp /= 2;
        }

        return negative ? 1.0 / ans : ans;
    }
};