class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=0;
        for(int i=0;i<s.length();i++){
            vector<int> c(26);
            int l=0;
            for(int j=i;j<s.length();j++){
                if(c[s[j]-'a'] < 2){
                    l++;
                    c[s[j]-'a']++;
                    n=max(l,n);
                }
                else
                    break;
            }
        }
        return n;
    }
};