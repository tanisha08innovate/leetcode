class Solution {
public:
    int mySqrt(int n) {
    if(n<2) return n;
    int low = 1, high = n;
    int ans=1;

while(low <= high) {
long long mid = low+(high-low) / 2;
if((mid*mid) <= n) {
    ans=mid;
    low=mid+1;
}
else{
    high=mid-1;;
}
}
return ans;
    }
};