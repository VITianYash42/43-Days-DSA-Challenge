                                                // DAY 23 - "FOOTBALL"

#include <iostream>
#include <string>

int main () {
    std::string s;
    std::cin >> s;
    if (s.length() < 7) {
        std::cout << "NO" << std::endl;
        return 0;
    }
    int counter = 1;
    for (int i=1; i<s.length(); i++) {
        if (s[i-1] == s[i]) {
            counter += 1;
        }
        else {
            counter = 1;
        }
        if (counter >= 7) {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }
    std::cout << "NO" << std::endl;
    return 0;
}