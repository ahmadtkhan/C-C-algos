#include "sell_stocks.h"
#include "climits"

int sell_stocks::maxProfit(std::vector<int>& prices) {
    int profit = 0;
    int min_val = INT_MAX;
    for(int i = 0; i < prices.size(); i++){
        if(prices[i] < min_val){
            min_val = prices[i];
        }
        if(prices[i] <= min_val){
            min_val = prices[i];
        }else if(prices[i] - min_val > profit){
            profit = prices[i] - min_val;
        }
    }
    return profit;
}
