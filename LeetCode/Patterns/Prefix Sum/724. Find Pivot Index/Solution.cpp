class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int leftsum=0;
        int totalsum= accumulate(nums.begin(), nums.end(), 0);
       
        for(int i=0; i<n; i++) {
            int rightsum= totalsum-leftsum-nums[i];
          if(leftsum==rightsum) {
          return i;
        }
        leftsum+=nums[i];
    }
    return -1;
    }
};