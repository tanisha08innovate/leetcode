class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int n = nums.size();
       int maxstreak = INT_MIN;
       int count =0;

       for(int i=0; i<n; i++) {
        if(nums[i]==1) {
            count++;
            maxstreak = max(maxstreak, count);
        } else if(nums[i]==0) {
            count=0;
        }
       }
       return maxstreak;
    }
};