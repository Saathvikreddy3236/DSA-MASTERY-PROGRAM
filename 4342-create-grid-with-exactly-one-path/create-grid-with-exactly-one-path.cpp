
class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> v(m, string(n, '#'));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (j == i || j == i + 1) {
                    v[i][j] = '.';
                }
            }
        }
        if (m > n) {
            for (int i = n - 1; i < m; i++) {
                v[i][n - 1] = '.';
            }
        } else if (m < n) {
            for (int j = m - 1; j < n; j++) {
                v[m - 1][j] = '.';
            }
        }

        if (m == 1) {
            v[0] = string(n, '.');
        }

        if (n == 1) {
            for (int i = 0; i < m; i++) {
                v[i][0] = '.';
            }
        }

        return v;
    }
};
