                                              // DAY 32 - "George and Accommodation"

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int yes_counter = 0;
    while (n--) {
        int p, q;
        std::cin >> p >> q;
        if (q - p >= 2) {
            yes_counter += 1;
        }
    }
    std::cout << yes_counter << std::endl;
    return 0;
}