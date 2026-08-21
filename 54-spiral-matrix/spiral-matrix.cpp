class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        if (m.empty()) return {};

        int col = m.size();
        int row = m[0].size();

        vector<vector<bool>> visit(col, vector<bool>(row, false));
        vector<int> v;

        int i = 0, j = 0;
        int total = col * row;

        while (v.size() < total) {

            // Right
            while (j < row && !visit[i][j]) {
                v.push_back(m[i][j]);
                visit[i][j] = true;
                j++;
            }
            j--;

            // Down
            i++;
            while (i < col && !visit[i][j]) {
                v.push_back(m[i][j]);
                visit[i][j] = true;
                i++;
            }
            i--;

            // Left
            j--;
            while (j >= 0 && !visit[i][j]) {
                v.push_back(m[i][j]);
                visit[i][j] = true;
                j--;
            }
            j++;

            // Up
            i--;
            while (i >= 0 && !visit[i][j]) {
                v.push_back(m[i][j]);
                visit[i][j] = true;
                i--;
            }
            i++;

            // Find the next unvisited cell
            while (v.size() < total && visit[i][j]) {
                j++;
                if (j >= row) {
                    j = 0;
                    i++;
                }
            }
        }

        return v;
    }
};