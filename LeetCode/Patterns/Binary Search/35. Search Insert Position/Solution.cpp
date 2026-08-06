class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0; i<n; i++) {
            if(nums[i] == target) {
                return i;
            }
            else if(i<n-1 && nums[i]<target && nums[i+1]>target) {
                return i+1;
            }
            else if(nums[n-1]<target) {
                return n;
            }
            }
             return 0;
    } 
};