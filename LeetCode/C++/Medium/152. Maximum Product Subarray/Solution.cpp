class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int currprod=1;
        int maxprod= INT_MIN;

        for(int i=0; i<n; i++) {
            currprod *= nums[i];
            maxprod = max(maxprod, currprod);
           if(currprod==0) {
            currprod=1;
           }
        }
        currprod=1;
        for(int i=n-1; i>=0; i--) {
            currprod *= nums[i];
            maxprod= max(maxprod, currprod);
            if(currprod==0) {
                currprod=1;
            }
        }
        return maxprod;
    }
};