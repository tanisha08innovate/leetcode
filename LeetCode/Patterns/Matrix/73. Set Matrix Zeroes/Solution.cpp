class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int>row(m,0); //m elements initialised to 0
        vector<int>col(n,0); // n elements initialised to 0

        for(int i= 0; i<m; i++){
           for(int j=0; j<n; j++) {
            if(matrix[i][j]==0) {
                row[i]=1; //remeber row[i]
                col[j]=1; ////remeber col[j]
            }
           }
        }
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(row[i]==1 || col[j]==1) {
                    matrix[i][j]=0;
                }
            }
        }
    }
};