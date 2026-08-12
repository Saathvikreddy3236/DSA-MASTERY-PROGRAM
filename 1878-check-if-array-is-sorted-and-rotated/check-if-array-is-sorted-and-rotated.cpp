class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> k = nums;
        sort(k.begin(), k.end());
        for (int i = 0; i < n; i++) {
            int t = nums[0];
            for (int j = 0; j < n - 1; j++) {
                nums[j] = nums[j + 1];
            }
            nums[n - 1] = t;
            if (k == nums)
                return true;
        }
        return false;
    }
};