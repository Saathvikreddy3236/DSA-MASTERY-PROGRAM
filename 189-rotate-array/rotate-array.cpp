class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int t = nums.size();
        vector<int> n(t);
        if (t >= 1) {
            k = k % t;
            for (int i = 0; i < t; i++) {
                if (i + k < t)
                    n[i + k] = nums[i];
                else {
                    n[i + k - t] = nums[i];
                }
            }
            for (int i = 0; i < t; i++) {
                nums[i] = n[i];
            }
        }
    }
};