class Solution {
public:
    int search(vector<int>& nums, int t) {
        int left=0,right=nums.size();
        while(left<right){
            int mid = left + (right - left)/2;
            if(nums[mid]==t)
                return mid;
            else if(nums[mid]<t)
                left = mid+1;
            else if(nums[mid]>t)
                right = mid;
        }
        return -1;
    }
};