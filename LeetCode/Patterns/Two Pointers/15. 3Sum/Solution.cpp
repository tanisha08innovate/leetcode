class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
       set<vector<int>>sett;
        for(int i=0; i<n; i++) { //jab i change hoga tab hashset empty hokr vapis banega
         set<int>hashset;
            for(int j=i+1; j<n; j++) {
                int third = -(nums[i]+nums[j]);
                if(hashset.find(third) != hashset.end()) {
                    vector<int>temp ={nums[i], nums[j], third};
                    sort(temp.begin(), temp.end()); //prevents duplicate triplets
                    sett.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }
        vector<vector<int>>ans(sett.begin(), sett.end());
        return ans;
    }
};