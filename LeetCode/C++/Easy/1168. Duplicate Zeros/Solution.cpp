class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
       
        for(int i=0; i<n-1; i++) {
            if(arr[i] == 0) {
              
                arr.insert(arr.begin()+i+1, 0);
                i++;
                arr.erase(arr.end());
            }
        }
    }
};