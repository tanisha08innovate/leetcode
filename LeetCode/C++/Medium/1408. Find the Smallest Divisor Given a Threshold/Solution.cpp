class Solution {
public:

// For every element, take its ceil value (e.g., 0.1 → 1, 2.4 → 3)

// Example: For [1, 2, 5, 9], search space is [1, 9].

// Divisor 9 gives [1, 1, 1, 1] = 4.

// Divisor 10 also gives [1, 1, 1, 1] = 4.

// So, there is no point in checking divisors greater than 9.


int sumByD(vector<int>& nums, int mid) {
int sum=0;
int n=nums.size();
for(int i=0; i<n; i++) {
    sum+= ceil((double)(nums[i])/(double)(mid));
}
return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high= *max_element(nums.begin(), nums.end()); //bcz search 
        //space is not always sorted
        //we cant assume last element to be the greatest
        int ans=-1;
        int n=nums.size();

        while(low<=high) {
            int mid= low+(high-low)/2;
            if(sumByD(nums, mid) <= threshold) {
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};