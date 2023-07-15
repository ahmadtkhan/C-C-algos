#include <iostream>
#include "sell_stocks.h"

int main(){
    std::vector<int>test_vec = {5, 1, 2, 5, 8};
    sell_stocks test;
    std::cout << test.maxProfit(test_vec) << std::endl;
}