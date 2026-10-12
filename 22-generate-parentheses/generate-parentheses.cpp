class Solution {
public:
    
    vector<string> vs;
    void par(string s,int open,int close,int n){
        if(s.length()==2*n){
            vs.push_back(s);
            return;
        }
        if(open < n)
            par(s+'(',open+1,close,n);
        if(close < open)
            par(s+')',open,close+1,n);
    }
    vector<string> generateParenthesis(int n) {
        int open=0,close=0;
        string s="";
        par(s,0,0,n);
        return vs;
    }
};