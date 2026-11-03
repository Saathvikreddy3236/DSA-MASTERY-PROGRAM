class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums[0];
        for(int i=0;i<nums.size();i++){
            if(n<nums[i])
                n=nums[i];
        }
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=n-nums[i];
        }
        return s;
    }
};