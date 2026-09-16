class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       //there can be at most 2 elements that can
       //occur ore then n/3 times
        int n = nums.size();
        vector<int> ans;

        int candidate1 = 0, candidate2 = 0;
        int count1 = 0, count2 = 0;

        // Moore's Voting
        for(int i = 0; i < n; i++) {
            if(nums[i] == candidate1) {
                count1++;
            }
            else if(nums[i] == candidate2) {
                count2++;
            }
            else if(count1 == 0) {
                candidate1 = nums[i];
                count1 = 1;
            }
            else if(count2 == 0) {
                candidate2 = nums[i];
                count2 = 1;
            }
            else {
                count1--;
                count2--;
            }
        }

        // Verify candidates
        count1 = 0;
        count2 = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] == candidate1)
                count1++;
            else if(nums[i] == candidate2)
                count2++;
        }

        if(count1 > n/3)
            ans.push_back(candidate1);

        if(count2 > n/3)
            ans.push_back(candidate2);

        return ans;
    }
};