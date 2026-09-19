class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        //[1,1,1]
        unordered_map<int, int>m; //sum -> frequency
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
           // [0 -> 1] count=0
           // [1 -> 1] count=0
           // [2 -> 1] count = 1
           // [3 -> 1] count = 2
        }
        return count;
    }
};