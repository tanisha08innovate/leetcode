class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int st=0;
        int end=nums.size() -1;
        int n = nums.size();

        while(st<=end){
         int mid=st+(end-st)/2;
         if(n==1) {
            return 0;
         }
         if(mid==0) {
            if(nums[0]>nums[1]) {
                return 0;
            } else{
                st=mid+1;
                continue;
            }
         }
         if(mid==n-1) {
            if(nums[n-1]>nums[n-2]) {
                return n-1;
            } else{
                end=mid-1;
                continue;
            }
         }
         if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) {
            return mid;
         }
         else if(nums[mid]>nums[mid-1]) {
              st=mid+1;
         }else{
           end=mid-1;
         }
        }
        return -1;
    }
};