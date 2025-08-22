                                              // DAY 17 - "TRANSLATION"

#include <iostream>
#include <string>
#include <algorithm>
 
int main() {
    std::string s;
    std::cin >> s;
    std::string t;
    std::cin >> t;
    std::string reversed = s;
    std::reverse(reversed.begin(), reversed.end());
    if(reversed == t) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}