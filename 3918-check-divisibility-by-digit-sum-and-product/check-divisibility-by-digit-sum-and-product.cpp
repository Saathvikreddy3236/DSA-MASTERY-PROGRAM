class Solution {
public:
    bool checkDivisibility(int n) {
        int k=n,sum=0,pro=1;
        while(k!=0){
            sum+=k%10;
            pro*=k%10;
            k=k/10;
        }
        if(n % (sum + pro)==0)
            return true;
        return false;
    }
};