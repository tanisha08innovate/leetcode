class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n = nums.size();
     int count =1;
     unordered_map<int, int>m;
     int first=0;
     int second=0;

    for(int i=0; i<n; i++) {
       first=nums[i];
       second=nums[i];
       if(m.find(second) != m.end()) {
        count++;
        m[first]=i;
       } else{
        m[first]=i;
       }
    }
     if(count>n/2) {
        return first;
    }
    return -1; 
    }
};