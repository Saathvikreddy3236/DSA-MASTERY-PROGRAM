
class Solution {
public:
    static const long long MOD = 1000000007LL;

    long long modPow(long long base, long long exp) {
        long long result = 1;

        while (exp > 0) {
            if (exp % 2 == 1)
                result = (result * base) % MOD;

            base = (base * base) % MOD;
            exp /= 2;
        }

        return result;
    }

    int countGoodNumbers(long long n) {
        long long k = modPow(20, n / 2);

        if (n % 2 == 1)
            k = (k * 5) % MOD;

        return k;
    }
};
