#include <iostream>
#include "check.h"

int main() {
    std::string s = "{([])}";
    check test;
    if (test.isValid(s)) {
        std::cout << "String is valid." << std::endl;
    } else {
        std::cout << "String is not valid." << std::endl;
    }
    return 0;
}
