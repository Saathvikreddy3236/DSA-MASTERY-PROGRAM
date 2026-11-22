class Solution {
public:
    bool checkString(string s) {
        int b=0;
        for(int i=0;i<s.length();i++){
            if(b==1 && s[i]=='a')
                return false;
            if(s[i]=='b')
                b=1;
        }
        return true;
    }
};