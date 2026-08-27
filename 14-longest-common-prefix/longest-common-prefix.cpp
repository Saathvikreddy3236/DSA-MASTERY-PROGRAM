class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        for(int i=0;i<strs[0].length();i++){
            char c = strs[0][i];
            for(int j=0;j<strs.size();j++){
                if(c!=strs[j][i])
                    return s; 
            }
            s+=c;
        }
        return s;
    }
};