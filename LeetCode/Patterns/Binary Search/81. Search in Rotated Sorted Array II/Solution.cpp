class Solution {
public:
    bool search(vector<int>& nums, int target) {
       int n= nums.size();
       int st=0;
       int end=n-1;

       while(st<=end) {
        int mid= st+(end-st)/2;

        if(nums[mid]==target) {
            return true;
        }
        //handle duplicates where we cant determine sroted half
        if(nums[st]==nums[mid] && nums[mid]==nums[end]) {
            st++;
            end--;
        }
        else if(nums[st]<= nums[mid]) {
            if(nums[st] <= target && nums[mid]>=target) {
              end=mid-1;
            } else{
                st=mid+1;
            }
        } else{
            if(nums[end]>=target && nums[mid]<=target) {
               st=mid+1;
            } else{
                end=mid-1;
            }
        }
       }
       return false;
    }
};