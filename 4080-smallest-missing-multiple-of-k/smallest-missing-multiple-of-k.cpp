class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s;

        int n=nums.size();
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        int i=1;
        while(k*i<=100){
            if(s.count(k*i) == 0)
                return k*i;
            i++;
        }
        return k*i;
    }
};