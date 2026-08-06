class Solution {
public:
    double myPow(double x, int n) {
    long binForm = n;
    double ans=1;

    if(binForm <0) {
        x = 1/x;
       binForm = -binForm;
    }  
    while(binForm > 0) {
        if(binForm % 2 == 1) { //last digit 1 hoto
            ans *= x; //answer=ans*x
        }
        x = x*x; //update x
        binForm = binForm/2; //update binForm to left
    }  
    return ans;
    }
};