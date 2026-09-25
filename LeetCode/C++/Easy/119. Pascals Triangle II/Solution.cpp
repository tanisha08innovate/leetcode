class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n = rowIndex;
       long long ans=1;
        vector<int>result;
        result.push_back(1);
        for(int i=1; i<=n; i++) {
           ans= ans*(n-i+1);
           ans=ans/i;
           result.push_back(ans);
        }
      
        return result;
    }
};