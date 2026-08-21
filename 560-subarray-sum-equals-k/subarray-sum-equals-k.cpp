class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        if (nums.size() == 1 && nums[0] == k)
            return 1;
        int count = 0;
        for (int j = 0; j < nums.size(); j++) {
            int sum = 0;
            for (int i = j; i < nums.size(); i++) {
                sum += nums[i];
                if (sum == k)
                    count++;
            }
        }

        return count;
    }
};