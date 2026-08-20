class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix[0].size(),col = matrix.size();
        vector<int> r(row ,-1);
        vector<int> c(col,-1);
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                if(matrix[i][j]==0){
                    r[j]=0;
                    c[i]=0;
                }
            }
        }
        for(int i=0;i<col;i++){
            if(c[i]==0){
                for(int j=0;j<row;j++){
                    matrix[i][j]=0;
                }
            }
        }
        for(int i=0;i<row;i++){
            if(r[i]==0){
                for(int j=0;j<col;j++){
                    matrix[j][i]=0;
                }
            }
        }
    }
};