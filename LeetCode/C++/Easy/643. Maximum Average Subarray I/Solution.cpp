class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int currsum=0;
        for(int i=0; i<k; i++) {
            currsum += nums[i];
        }
        int maxsum = currsum;

        for(int i=k; i<n; i++){
            currsum = currsum + nums[i] - nums[i-k];
            maxsum = max(maxsum, currsum);
        }
        return (double)maxsum/k;
    }
};