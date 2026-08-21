class Solution {
public:
    vector<vector<int>> generate(int nr) {
        vector<vector<int>> v;

        for (int i = 0; i < nr; i++) {
            vector<int> row(i + 1, 1);

            for (int j = 1; j < i; j++) {
                row[j] = v[i - 1][j - 1] + v[i - 1][j];
            }

            v.push_back(row);
        }

        return v;
    }
};