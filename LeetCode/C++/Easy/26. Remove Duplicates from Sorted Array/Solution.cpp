class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        int position=0;
        for(int i =0; i<n-1; i++) {
            if(nums[i] != nums[i+1]) {
                nums[position] = nums[i]; //sorted hai duplicates are always next to each other
                position++;
            }
            }
             nums[position]=nums[n-1];
             position++;
        return position;
    }
};