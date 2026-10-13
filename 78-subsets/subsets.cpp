class Solution {
public:
    vector<vector<int>> v;

    void powset(vector<int>& nums, int i, vector<int>& curr) {
        if (i == nums.size()) {
            v.push_back(curr);
            return;
        }

        curr.push_back(nums[i]);
        powset(nums, i + 1, curr);

        curr.pop_back();
        powset(nums, i + 1, curr);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        v.clear();
        vector<int> curr;
        powset(nums, 0, curr);
        return v;
    }
};