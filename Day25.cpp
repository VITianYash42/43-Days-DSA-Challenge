                                           // DAY 25 - "BEAR AND BIG BROTHER"

#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    int limak_weight = a;
    int bob_weight = b;
    int year = 0;
    while (limak_weight <= bob_weight) {
        limak_weight *= 3;
        bob_weight *= 2;
        year += 1;
    }
    std::cout << year << std::endl;
    return 0;
}