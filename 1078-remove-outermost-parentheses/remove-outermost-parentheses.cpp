class Solution {
public:
    string removeOuterParentheses(string s) {
        int k=0;
        string r="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' && k == 0)
                k++;
            else if(s[i] == '(' && k!=0){
                k++;
                r+=s[i];
            }
            else if(s[i] == ')' && k!=1){
                k--;
                r+=s[i];
            }
            else if(s[i] == ')' && k==1){
                k--;
            }
        }
        return r;
    }
};