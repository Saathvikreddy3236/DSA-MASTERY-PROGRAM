class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int s = nums.size();
        int p = 0, n = 1;
        vector<int> res(s);
        for (int i = 0; i < s; i++) {
            if (nums[i] > 0) {
                res[p] = nums[i];
                p += 2;
            } else {
                res[n] = nums[i];
                n += 2;
            }
        }
        return res;
    }
};