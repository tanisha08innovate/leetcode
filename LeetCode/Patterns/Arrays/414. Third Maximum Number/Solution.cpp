class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int count =0;
        for(int i = n-1; i>=0; i--) {
             if(i==0 || nums[i] != nums[i-1]) {
                count++;
                if(count == 3) {
                return nums[i];
             }
             }
            }
        return nums[n-1];
    }
};