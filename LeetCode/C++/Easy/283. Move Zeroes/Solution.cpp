class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroCount = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[0]==0) {
                nums.erase(nums.begin());
                nums.push_back(0);
            }
             else if(nums[i] == 0) {
           nums.erase(nums.begin()+i);
           nums.push_back(0);
                zeroCount++;
        } else{
                continue;
        }
    }
    }
};