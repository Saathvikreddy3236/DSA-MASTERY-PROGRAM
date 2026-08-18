class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int windows = n - k + 1;
        unordered_map<int, pair<int, int>> interval;
        unordered_map<int, int> count;

        for (int i = 0; i < n; i++) {
            int x = nums[i];
            int l = max(0, i - k + 1);
            int r = min(i, windows - 1);

            if (!interval.count(x)) {
                interval[x] = {l, r};
                count[x] = r - l + 1;
            } else {
                auto& [L, R] = interval[x];
                if (l > R) {
                    count[x] += r - l + 1;
                    L = l;
                    R = r;
                } else if (r > R) {
                    count[x] += r - R;
                    R = r;
                }
            }
        }

        int ans = -1;

        for (auto& [x, cnt] : count) {
            if (cnt == 1) {
                ans = max(ans, x);
            }
        }

        return ans;
    }
};