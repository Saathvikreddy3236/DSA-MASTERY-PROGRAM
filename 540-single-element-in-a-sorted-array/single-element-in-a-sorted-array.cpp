class Solution {
public:
    int bin(int left,int right,vector<int>& nums){
        if(left == right)
            return nums[left];
        
        int mid = right - (right-left)/2;
        if (mid % 2 == 1)
            mid--;
        if (nums[mid] == nums[mid + 1])
            return bin(mid + 2, right, nums);
        else
            return bin(left, mid, nums);
    }
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0,right = nums.size()-1;
        return bin(left,right,nums);
    }
};