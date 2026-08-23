class Solution {
public:
    bool isPalindrome(string s) {
        string r="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i]))
                r += tolower(s[i]);
        }
        int i=0,n=r.length();
        while(i<n/2){
            if(r[i] != r[n-i-1])
                return false;
            i++;
        }
        return true;
    }
};