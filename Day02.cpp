                                           // DAY 02 - "BEST TIME TO BUY AND SELL STOCKS" //

#include <iostream>
#include <vector>
#include <algorithm> 
#include <limits>   

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int min_price = std::numeric_limits<int>::max();
        int max_profit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < min_price) {
                min_price = prices[i];
            } 
            else if (prices[i] - min_price > max_profit) {
                max_profit = prices[i] - min_price;
            }
        }
        return max_profit;
    }
};
int main() {
    Solution sol;
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};
    int profit = sol.maxProfit(prices);
    std::cout << "Max profit is: " << profit << std::endl;
    return 0;
}