class Solution {
public:
    int myAtoi(string s) {
        if(s.length()==0)
            return 0;
        int k = 1,i=0;
        while(i<s.length() && s[i] == ' '){
            i++;
        }
        if(i < s.length() && s[i]=='-'){
            k*=-1;
            i++;
        }
        else if(i < s.length() && s[i]=='+'){
            i++;
        }
        long long int n=0;
        for(i=i;i<s.length();i++){
            if(s[i] < '0' || s[i] > '9')
                return n * k;
            int t = s[i] - '0';
            n=n*10+t;

            if (n * k > INT_MAX)
                return INT_MAX;

            if (n * k < INT_MIN)
                return INT_MIN;
        }
        return n*k;
    }
};