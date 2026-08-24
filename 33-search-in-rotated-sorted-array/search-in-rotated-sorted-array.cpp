class Solution {
public:
    int search(vector<int>& nums, int t) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }
        if (mp.find(t) != mp.end())
            return mp[t];
        return -1;
    }
};