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
        //handle duplicates where we cant determine sorted half
        if(nums[st]==nums[mid] && nums[mid]==nums[end]) {
            st++;
            end--;
        }
        else if(nums[st]<= nums[mid]) { //left sorted
            if(nums[st] <= target && nums[mid]>=target) { //left half
              end=mid-1;
            } else{ //right half
                st=mid+1;
            }
        } else{ //right sorted
            if(nums[end]>=target && nums[mid]<=target) {//left half
               st=mid+1;
            } else{ //right half
                end=mid-1;
            }
        }
       }
       return false;
    }
};