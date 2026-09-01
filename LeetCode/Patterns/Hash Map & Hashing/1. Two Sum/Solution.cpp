class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n= arr.size();
       int first=0;
       int second=0;
       unordered_map<int,int>m;
       vector<int>pair;

       for(int i=0; i<n; i++) {
        first = arr[i];
        second = target-first;
        if(m.find(second) != m.end()) { //means second found
           pair.push_back(i);
           pair.push_back(m[second]);
           break;
        } 
        m[first]=i;
       }
       return pair;
    }
};