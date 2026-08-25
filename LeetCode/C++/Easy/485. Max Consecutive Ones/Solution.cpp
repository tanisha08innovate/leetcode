class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int streak=0;
       int maxstreak=0;
       int n = nums.size();

       for(int i=0; i<n; i++) {
        if(nums[i]==1) {
            streak++;
        }
        if(streak>maxstreak) {
            maxstreak = streak;
        }
        if(nums[i] ==0) {
            streak=0;
        }
       }
       return maxstreak;
    }
};