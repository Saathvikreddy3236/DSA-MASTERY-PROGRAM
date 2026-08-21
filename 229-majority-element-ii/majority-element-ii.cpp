class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // if(nums.size() < 3)
        //     return nums;
        vector<int> v;
        unordered_map<int, int> mp;
        float n=nums.size();
        n/=3.0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]] > n){
                v.push_back(nums[i]);
                mp[nums[i]]=0;
            }
                
        }
        return v;
    }
};