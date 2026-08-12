class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size()-1,s=0,c=0;
        while(n>s){
            int c1=min(height[s],height[n])*(n-s);

            c=max(c1,c);
            if(height[n]>height[s])
                s++;
            else    n--;
        }
        return c;
    }
};