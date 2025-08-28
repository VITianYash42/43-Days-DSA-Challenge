                                               // DAY 35 - "DRINKS" //

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    double count = 0.0;
    for (int i =0; i< n; i++) {
        int a;
        std::cin >> a;
        count += a;
    }
    long double fraction = count/n;
    std::cout << fraction << std::endl;
    return 0;
}