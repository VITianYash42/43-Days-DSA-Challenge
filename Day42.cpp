                                  // DAY 42 - "MINIMUM DIGIT"

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int x;
        std::cin >> x;
        std::string s = std::to_string(x);
        int minimum_digit = 10;
        for (char c : s) {
            int digits = c -'0';
            minimum_digit = std::min(minimum_digit, digits);
        }
        std::cout << minimum_digit << std::endl;
    }
    return 0;
}