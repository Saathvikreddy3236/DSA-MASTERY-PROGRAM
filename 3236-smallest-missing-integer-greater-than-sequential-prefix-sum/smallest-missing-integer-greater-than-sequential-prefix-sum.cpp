class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int p = nums[0], c = p, c1 = 0;

        for (int i = 1; i < n; i++) {
            if (p + 1 == nums[i]) {
                c += nums[i];
                p++;
            }
            else {
                c1 = c;
                break;
            }
        }

        if (c1 == 0)
            c1 = c;

        unordered_set<int> s(nums.begin(), nums.end());

        while (s.count(c1))
            c1++;

        return c1;
    }
};