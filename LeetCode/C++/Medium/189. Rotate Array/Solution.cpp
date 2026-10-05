class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n= nums.size(); //1,2,3,4,5,6, [k=2]
    k=k%n;  //if k=n no rotation actually happened
    //therefore for k>n like k=8 is 1 rotation (7+1=8)
    //k=9 is 2 rotations (7+2=9)
    reverse(nums.begin(), nums.end()-k);
    reverse(nums.end()-k, nums.end());
    reverse(nums.begin(), nums.end()); 
    //5,6,1,2,3,4
    }
};