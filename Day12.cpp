                                                   // DAY 12 - "BOY OR GIRL"

#include <iostream>
#include <string>
#include <algorithm>
 
int main () {
    std::string s;
    std::cin >> s;
    std::sort(s.begin(), s.end());
    auto last = std::unique(s.begin(), s.end());
    s.erase(last, s.end());
    int n = s.length();
    if (n % 2 == 0) {
        std::cout << "CHAT WITH HER!" << std::endl;
    }
    else {
        std::cout << "IGNORE HIM!" << std::endl;
    }
    return 0;
}
