class Solution {
public:
    int findMin(vector<int>& nums) {
      int n=nums.size();
      int st=0;
      int end=n-1;
      
      while(st<end) {
        int mid= st+(end-st)/2;
        if(nums[end]<nums[mid]) {
            st=mid+1;
        } else{
            end=mid;
        }
      }
      return nums[end];
    }
};