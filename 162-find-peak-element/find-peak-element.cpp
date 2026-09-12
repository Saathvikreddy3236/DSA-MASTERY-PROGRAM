class Solution {
public:
    int peak(vector<int>& nums, int left, int right) {
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[mid + 1])
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    }
    int findPeakElement(vector<int>& nums) {
        return peak(nums, 0, nums.size()-1);
    }
};