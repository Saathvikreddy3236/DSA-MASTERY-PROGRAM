class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int min=nums[0],Max=0;
        for(int i=1;i<nums.size();i++){
            int m=0;
            if(nums[i]<min){
                min=nums[i];
            }
            m=nums[i]-min;
            Max=max(m,Max);
        }
        return Max;
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         c=nums[j]-nums[i];
        //         if(c>0 && c>k)
        //             k=c;
        //         c=0;
        //     }
        // }
        // return k;
    }
};