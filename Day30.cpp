                                                   // DAY 30 - "HQ9+" //

#include <iostream>
#include <string>

int main() {
    std::string p;
    std::cin >> p;
    for (int i = 0; i < p.size(); i++) {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }
    std::cout << "NO" << std::endl;
    return 0;
}