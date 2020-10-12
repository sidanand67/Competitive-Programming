/* We are getting the ans by using a single pass of for loop here */
/* We can maintain two variables - min and maxval corresponding to the smallest valley and maximum profit (maximum difference between selling price and minprice) obtained so far respectively. */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int maxval= 0;
        int n = prices.size();
        for(int i=0; i<n; i++){
            if(prices[i] < min)
                min = prices[i];
            if(prices[i]-min > maxval)
                maxval = prices[i] - min;
        }
        return maxval;
    }
};