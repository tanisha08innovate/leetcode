class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int currentSum=0;
        int maxSum= INT_MIN;

        for(int i=0; i<n; i++) {
            currentSum += nums[i];
            maxSum = max(currentSum, maxSum);

            if(currentSum <0) {
                currentSum = 0;
            }
        }
        return maxSum;
    }
};