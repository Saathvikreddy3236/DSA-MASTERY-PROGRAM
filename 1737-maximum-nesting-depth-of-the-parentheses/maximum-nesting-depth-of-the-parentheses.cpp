class Solution {
public:
    int maxDepth(string s) {
        int m=0,n=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                n++;
            }
            else if(s[i] == ')'){
                m=max(n,m);
                n--;
            }
        }
        return m;
    }
};