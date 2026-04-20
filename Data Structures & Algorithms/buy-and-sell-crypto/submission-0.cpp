class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minval = prices[0];
        int maxprofit =0;

        for(int i =1; i<prices.size(); i++){
           int  profit = prices[i] - minval;
           minval = min(minval , prices[i]);

           maxprofit = max(maxprofit , profit);
        }

        return maxprofit;
        
    }
};
