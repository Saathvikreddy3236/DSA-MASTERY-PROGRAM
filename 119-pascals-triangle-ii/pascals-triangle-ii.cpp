class Solution {
public:
    vector<int> getRow(int r) {
        vector<int> result;

        long long value = 1;

        for (int i = 0; i <= r; i++) {
            result.push_back(value);

            value = value * (r - i) / (i + 1);
        }

        return result;
    }
};