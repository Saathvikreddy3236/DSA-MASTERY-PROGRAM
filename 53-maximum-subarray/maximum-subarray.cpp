class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        int tmax=INT_MIN,curmax=0;
        for(int i=0;i<nums.size();i++){
            curmax+=nums[i];
            tmax = max(tmax,curmax);
            if(curmax < 0)
                curmax = 0;
        }
        return tmax;
    }
};