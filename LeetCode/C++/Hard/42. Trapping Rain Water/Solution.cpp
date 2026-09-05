class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>leftmax(n);
        leftmax[0]= height[0];
        vector<int>rightmax(n);
        rightmax[n-1]= height[n-1];

        for(int i=1; i<n; i++) {
            //when youre at i look at the max till i-1, and look at the heiht pf i-1, find the max ofthem & that'll be the leftmax for i.
            leftmax[i]= max(leftmax[i-1], height[i-1]);
        }
        for(int i=n-2; i>0; i--) {
            rightmax[i]= max(rightmax[i+1], height[i+1]);
        }
        int watertrapped=0;
        for(int i=0; i<n; i++) {
            int currwater= min(leftmax[i], rightmax[i]) - height[i];
            if(currwater>0) {
                watertrapped += currwater;
            }
        }
        return watertrapped;
    }
};