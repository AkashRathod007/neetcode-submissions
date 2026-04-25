class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int  bestTimeToBuy = prices[0];
        int totalProfit = 0;

        for(int i =1; i<prices.size();i++){

            if(prices[i]<bestTimeToBuy){
                bestTimeToBuy = prices[i];
            }

            if(prices[i]>bestTimeToBuy){

                int profit = prices[i]-bestTimeToBuy;
                totalProfit+=profit;
                bestTimeToBuy = prices[i];
            }
        }

        return totalProfit;
        
    }
};