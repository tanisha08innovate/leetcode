class Solution {
public:
    int mySqrt(int x) {
    if(x<2) return x;

   long long st=0;
   long long end=x;
   long long ans=0;

    while(st<=end) {
       long long mid= st+(end-st)/2;
       long long square = mid*mid;

        if(square==x) {
            return mid;
        }
        if(square<x){
            ans=mid;
            st=mid+1;
        }
        if(square>x){
            end=mid-1;
        }
    }
    return ans;
    }
};