class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int n = nums.size();
     int st=0;
    for(int i=0; i<n; i++) {
     if(nums[i]!=0) {
        swap(nums[st], nums[i]);
        st++;
     }
    }
    }
};