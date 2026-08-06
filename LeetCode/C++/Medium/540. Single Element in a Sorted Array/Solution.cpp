class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int n = nums.size();
       int st=0;
       int end =n-1;

       if(n==1) { // size of arr = 1
        return nums[0];
       }

      while(st <= end) {
       int mid = st + (end - st)/2;

        if(mid==0 && nums[mid] != nums[mid+1]){ //starting edge
        return nums[mid];
       }
       if(mid== n-1 && nums[mid] != nums[mid-1]) { //ending edge
        return nums[mid];
       }


       if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]) {
        return nums[mid];
       }

       if(mid % 2 != 0) { //mid is at odd
        if(nums[mid] == nums[mid-1]) {
            st = mid+1;
        } else{
            end = mid-1;
        }
        }
        else if(mid % 2 ==0) { // mid is at even
            if(nums[mid] == nums[mid-1]) {
                end = mid-1;
            } else {
                st = mid+1;
            }
        }
        }
        return -1;
    }
};