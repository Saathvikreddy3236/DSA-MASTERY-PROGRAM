class Solution {
public:
    int maxi(int i,int j,vector<int>& nums){
        int n=0;
        while(i<=j)
            n=max(n,nums[i++]);
        return n;
    }
    int mini(int i,int j,vector<int>& nums){
        int n=INT_MAX;
        while(i<j)
            n=min(n,nums[i++]);
        return n;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        if(nums.size()<=1)
            return 0;
        for(int i=0;i<nums.size();i++){
            int ma=0,mi;
            ma=maxi(0,i,nums);
            mi=mini(i,nums.size(),nums);
            if(k>=ma-mi)
                return i;
        }
        return -1;
    }
};