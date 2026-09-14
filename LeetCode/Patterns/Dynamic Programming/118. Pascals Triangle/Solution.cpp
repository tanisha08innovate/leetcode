class Solution {
public:
    int nCr(int n, int r) {
      int ans=1;
      for(int i=1; i<=r; i++) {
        ans= ans*(n-i+1);
        ans= ans/i;
      }
      return ans;

}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answ;
        long long n = numRows;
        for(int row=1; row<=n; row++) {
            vector<int>temp;
           
            for(int col=1; col<=row; col++) {
                temp.push_back(nCr(row-1, col-1));
            }
          
            answ.push_back(temp);
        }
        return answ;
    }
};