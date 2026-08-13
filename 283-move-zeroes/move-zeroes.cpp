class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = nums.size();
        vector<int> n(s);
        int k=s-1,j=0;
        for(int i=0;i<s;i++){
            if(nums[i] == 0)
                n[k--] = 0;
            else
                n[j++] = nums[i];
        }
        for(int i=0;i<s;i++)
            nums[i] = n[i];
    }
};