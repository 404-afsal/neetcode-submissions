class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0]; // Assume price in 1st day as minimum
        int max_profit = 0;
        for (size_t i = 1; i < prices.size(); i++)
        {
            if (prices[i] < min_price) // Is the price in current day smaller?
            {
                min_price = prices[i]; // Udpate buying price
            }
            int profit = prices[i] - min_price;
            if (profit >= max_profit) // Check if this is the best profit
            {
                max_profit = profit; 
            }
        }
        return max_profit;
    }
};
