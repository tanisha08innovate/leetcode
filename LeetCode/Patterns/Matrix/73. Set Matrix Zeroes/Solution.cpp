class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int col=1;

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(matrix[i][j]==0) {
                    matrix[i][0]=0; //mark the ith row
                    if(j != 0) {
                    matrix[0][j]=0; //mark the jth colom when it dosent collide with the row
                    }else{ //if it collides 
                     col=0; //use additionl block
                    }
                }
            }
        } 
        for(int i=m-1; i>0; i--) {
            for(int j=n-1; j>0; j--) {
                if(matrix[i][j] != 0) {
                    //checl for colom and row
                    if(matrix[0][j] == 0 || matrix[i][0] == 0) {
                        matrix[i][j]=0;
                    }
                }
            }
        } 
        if(matrix[0][0]==0) {
            for(int j=0; j<n; j++) {
            matrix[0][j]=0;
        }      
    }
    if(col==0) {
        for(int i=0; i<m; i++) {
            matrix[i][0]=0;
        }
    }
    }
};