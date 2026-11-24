
class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = min(n, 2);

        for (int i = 0; i < n; i++) {
            vector<int> seen;

            for (int j = i; j < n; j++) {
                bool valid = true;

                for (int k = 0; k < seen.size(); k++) {
                    if (gcd(seen[k], nums[j]) != 1) {
                        valid = false;
                        break;
                    }
                }

                if (!valid) break;

                seen.push_back(nums[j]);
                ans = max(ans, j - i + 1);
            }
        }

        return ans;
    }
};
