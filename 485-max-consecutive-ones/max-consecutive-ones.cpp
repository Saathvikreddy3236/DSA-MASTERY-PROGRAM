class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size(),c=0,sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                c++;
            }
            else{
                sum=max(sum,c);
                c=0;
            }
        }
        sum=max(sum,c);
        return sum;
    }
};