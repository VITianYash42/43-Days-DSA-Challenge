                                                // DAY 29 - "LUCKY DIVISION"

#include <iostream>
#include <vector>

int main () {
    int n;
    std::cin >> n;
    std::vector <int> lucky_Numbers = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for (int lucky : lucky_Numbers) {
        if (n % lucky == 0) {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }
    std::cout << "NO" << std::endl;
    return 0;
}