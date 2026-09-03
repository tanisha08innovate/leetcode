class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        int original=n;
        unordered_map<int, int>m;
        int count=0;
       for(int i=0; i<n; i++) {
        if(m.find(nums[i]) == m.end()) {
           m[nums[i]]=i;
           count++;
        } else{
            nums.erase(nums.begin()+i);
            i--;
            n--;
        }
       }
       return count;
    }
};