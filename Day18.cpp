                                                // DAY 18 - "ELEPHANT   "

#include <iostream>
 
int main () {
    int x;
    std::cin >> x;
    int steps = x/5;
    if (x%5 != 0) {
        steps += 1;
    }
    std::cout << steps << std::endl;
    return 0;
}