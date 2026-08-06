class Solution {
public:
    bool isPerfectSquare(int num) {
      long long st=1;
      long long end = num;

      while(st<=end) {
       long long mid= st+(end-st)/2;
      long long square = mid*mid;

       if(square==num){
        return true;
       }
       else if(square<num){
        st=mid+1;
       }
       else if(square>num) {
        end=mid-1;
       }
       }
      return false;
    }
};