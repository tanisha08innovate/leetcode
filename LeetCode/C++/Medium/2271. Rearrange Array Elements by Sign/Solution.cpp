class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         vector<int> positive;
        vector<int> negative;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0)
                positive.push_back(nums[i]);
            else
                negative.push_back(nums[i]);
        }
        vector<int> ans;

        int i = 0, j = 0;
        while(i < positive.size() && j < negative.size()) {
            ans.push_back(positive[i]);
            ans.push_back(negative[j]);
            i++;
            j++;
        }
        return ans;
    }
};