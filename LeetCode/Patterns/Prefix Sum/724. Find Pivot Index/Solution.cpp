class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
    for (int i = 0; i < n; i++) {
        int lfsum = 0;
        int rtsum = 0;
        
        // Sum elements to the left of i
        for (int k = 0; k < i; k++) lfsum += nums[k];
        
        // Sum elements to the right of i
        for (int j = i + 1; j < n; j++) rtsum += nums[j];
        
        if (rtsum == lfsum) {
            return i;
        }
    }
    return -1;
        
    }
};