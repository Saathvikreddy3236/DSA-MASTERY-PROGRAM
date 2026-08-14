class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c1 = 0, c0 = 0, c2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                c0++;
            else if (nums[i] == 1)
                c1++;
            else
                c2++;
        }
        cout << c1 << c2 << c0;
        for (int i = 0; i < nums.size(); i++) {
            if (i < c0) {
                nums[i] = 0;
            } else if (i >= c0 && i < c0 + c1) {
                nums[i] = 1;
            } else if (i >= c0 + c1 && i < c0 + c1 + c2) {
                nums[i] = 2;
            }
        }
    }
};