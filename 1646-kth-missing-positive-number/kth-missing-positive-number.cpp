class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int j=1,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=j){
                c++;
                i--;
            }
            if(c==k)
                return j;
            j++;
        }
        return j+k-c-1;
    }
};