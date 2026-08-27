class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length(),c=0;
        for(int i=n-1;i>=0;i--){
            if ((num[i] - '0') % 2 == 1){
                if(c==0)
                    return num;
                else
                    i=-1;
            }
            else
                c+=1;
        }
        string r="";
        if(c==n)
            return "";
        for(int i=0;i<n-c;i++)
            r+=num[i];
        return r;
    }
};