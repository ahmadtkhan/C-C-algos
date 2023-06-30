#include "twoSum.h"

std::vector<int> twoSum::two_Sum(std::vector<int>& nums, int target){
        std::vector<int> result;
        std::unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(m.find(diff) != m.end() && m.find(diff)->second != i){
                result.push_back(m.find(diff)->second);
                result.push_back(i);
                return result;
            }
            m[nums[i]] = i;
        }
    return result;
}