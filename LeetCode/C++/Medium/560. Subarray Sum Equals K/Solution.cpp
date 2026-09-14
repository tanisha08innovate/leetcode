class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int>m;
        int count=0;
        int sum=0;
        m[0]=1;
        for(int i=0; i<n; i++) {
            sum+= nums[i];
            int target = sum-k;
            if(m.find(target) != m.end()) {
                count += m[target];
            }
            m[sum]++;
        }
        return count;
    }
};