class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]] += 1;
        }
        int maxi = 0;
        int ans = 0;
        for (auto x : m) {
            if (x.second > maxi) {
                maxi = x.second;
                ans = x.first;
            }
        }
        return ans;
    }
};