class Solution {
public:

bool searchinrow(vector<vector<int>>& mat, int tar, int midrow) {
   int n = mat[0].size(); //only columns needed
   int st=0; 
   int end=n-1;
   while(st<=end) {
   int mid= st+(end-st)/2;

    if(mat[midrow][mid]==tar) {
        return true;
    }
    else if(tar>mat[midrow][mid]) {
        st=mid+1;
    }
    else if(tar<mat[midrow][mid]) {
        end=mid-1;
    }
   }
   return false;  
}
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int m = mat.size(); //row
        int n= mat[0].size(); //column
        int srow=0;
        int erow=n-1;
        while(srow<=erow) {
            int midrow= srow+(erow-srow)/2;

            if(tar >= mat[midrow][0] && tar<= mat[midrow][n-1]) {
                //founf the row
                //now BS on this row for number
                return searchinrow(mat, tar, midrow);

            } else if(tar >= mat[midrow][n-1]) {
                //downwards
                srow= midrow+1;
            } else if(tar <= mat[midrow][0]) {
                //upwards
                erow= midrow-1;
            }
        }
        return false;
    }
};