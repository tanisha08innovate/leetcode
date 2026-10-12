class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
   int n = nums.size();
   int st=0;
   int end=n-1;
   vector<int>ans={-1,-1};

   while(st<=end) {
    int mid= st+(end-st)/2;
    //first occurance
    if(nums[mid]==target) {
        ans[0]=mid;
        end=mid-1; //check if theres any early existance of target
    }
    else if(nums[mid]<target) {
        st=mid+1;
    }
    else if(nums[mid]>target) {
        end=mid-1;
    }
   }
   st=0;
   end=n-1;
   while(st<=end) {
    int mid= st+(end-st)/2;
     //last occurnce
    if(nums[mid]==target) {
        ans[1]=mid;
       st=mid+1; //check if theres any further existance of target
    }
    else if(nums[mid]<target) {
        st=mid+1;
    }
    else if(nums[mid]>target) {
        end=mid-1;
    }
   }
   return ans;
    }
};