                                               // DAY 37 - "DIVISIBILITY PROBLEM" //

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    int a, b;
    while (t--) {
        std::cin >> a >> b;
        if (a % b == 0) {
            std::cout << "0" << std::endl;
        }
        else {
            std::cout << b - (a % b) << std::endl;
        }
    }
    return 0;
}