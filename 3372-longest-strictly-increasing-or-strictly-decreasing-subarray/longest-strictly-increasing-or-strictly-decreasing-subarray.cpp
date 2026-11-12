class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int count = 1, cmax = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                count++;
            } else
                count = 1;
            cmax = max(count, cmax);
        }
        count = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                count++;
            } else
                count = 1;
            cmax = max(count, cmax);
        }
        return cmax;
    }
};