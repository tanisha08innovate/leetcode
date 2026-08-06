class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int n = prices.size();
        int bestBuy = prices[0]; //first day of array
         for(int i=1; i<n; i++) {
            if(prices[i]>bestBuy) {
                maxProfit= max(maxProfit, prices[i]-bestBuy); //price[i]-bestBuy naya maxProfit ho sakta h
            }
            bestBuy=min(prices[i], bestBuy);
         }
         return maxProfit;
    }
};