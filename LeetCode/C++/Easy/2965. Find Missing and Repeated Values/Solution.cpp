class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int, int>k;
        int actualsum=0;
       int a,b; //repeatedvalue, missingvalue
       for(int i=0; i<n ; i++) { //i=row index
        for(int j=0; j<n; j++) { //j=coloum
            k[grid[i][j]]++; //putting grid elemnts to map k
        }
       }
        for(auto itr=k.begin(); itr!=k.end(); itr++) {
           int number= itr -> first; //number = key
           int count= itr -> second; //count = frequency
            actualsum+=number*count ; //for further calculations..
            //number*count isliye kiya taki repetaed numer ka bar bar sum me add ho sake 

           if(count==2) {
            a = number; //found the repeated value
           }
        }
        int expsum=0;
        expsum = (n*n)*((n*n)+1)/2;
        // mising value find karo ab
        b = expsum + a - actualsum;

        //vector banake answer dedo
        vector<int>ans;
        ans.push_back(a);
        ans.push_back(b);

        return ans;
    }
};