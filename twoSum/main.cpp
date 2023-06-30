#include <iostream>
#include "twoSum.h"

void print(const std::vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> test_arr = {3, 5, 1, 9, 10};
    twoSum solution;
    std::vector<int> ans = solution.two_Sum(test_arr, 14);
    print(ans);
    return 0;
}
