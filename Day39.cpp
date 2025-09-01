                                             // DAY 39 - "SOLDIER AND BANANAS" //

#include <iostream>

int main() {
    int k, n, w;
    std::cin >> k >> n >> w;
    int total_cost = 0;
    for (int i=1; i<=w; i++) {
        total_cost += i*k;
    }
    if (total_cost > n) {
        int amount_to_borrow = total_cost - n;
        std::cout << amount_to_borrow << std::endl;
        return 0;
    }
    std::cout << "0" << std::endl;
    return 0;
}