#include "algo.h"

bool algo::isAnagram(std::string s, std::string t){
    if(s.size() != t.size()){
        return false;
    }
    std::vector<int> test(30);
    for(int i = 0; i < s.size(); i++){
        test[s[i] - 'a'];
    }
    for(int j = 0; j < t.size(); j++){
        int x = --test[s[i] - 'a'];
        if(x < 0){
            return false;
        }
    }
    return true;
}