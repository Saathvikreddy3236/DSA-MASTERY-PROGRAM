class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size(),k=2;
        if(n<=2)
            return nums;
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        while(k<n){
            if(arr1.back() >= arr2.back()){
                arr1.push_back(nums[k++]);
            }
            else{
                arr2.push_back(nums[k++]);
            }
        }
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        return arr1;
    }
};