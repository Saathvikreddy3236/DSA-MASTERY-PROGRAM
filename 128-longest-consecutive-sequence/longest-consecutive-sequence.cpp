class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        set<int> myset(nums.begin(), nums.end());
        
        int size = 1;
        int maxsize = 1;
        
        bool is_first = true;
        int prev_num = 0;

        for (int current_num : myset) {
            if (is_first) {
                prev_num = current_num;
                is_first = false;
                continue;
            }
            if (current_num == prev_num + 1) {
                size += 1;
            } else {
                maxsize = max(maxsize, size);
                size = 1; 
            }
            maxsize = max(maxsize, size);
            prev_num = current_num; 
        }

        return maxsize;
    }
};
