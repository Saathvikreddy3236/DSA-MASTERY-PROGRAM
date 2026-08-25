class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> v;
        for(int i=1;i<=n+1;i++){
            v.push_back(k*i);
        }
        for(int i=0;i<n+1;i++){
            int t=0;
            for(int j=0;j<n;j++){
                if(v[i]==nums[j])
                    t=3;
            }
            if(t==0){
                n=v[i];
                break;
            }
        }
        return n;
    }
};