class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int n= nums.size();
        int count =0;
       for(int i=0; i<n; i++) {
        if(nums[i]==0) {
            count++;
            nums.erase(nums.begin() + i);
        }
       }
       for(int i=0; i<n; i++) {
        if(n< i+1+count) {
        nums.push_back(0);
       }
       }
    }
};