class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int pair=0;
        for(int i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                if(nums[i] == nums[j]) {
                    pair++;
                }
              }  
            }
        return pair;
    } 
};