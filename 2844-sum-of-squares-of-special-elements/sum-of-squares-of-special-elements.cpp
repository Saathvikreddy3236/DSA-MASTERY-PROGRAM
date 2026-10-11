class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size(),sum=0;
        for(int i=0;i<n;i++){
            int k=nums[i];
            if(n%(i+1)==0)
                sum+=k*k;
        }
        return sum;
    }
};