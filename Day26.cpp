                                   // DAY 26 - "NEARLY LUCKY NUMBER"

#include <iostream>
#include <string>

int main () {
    std:: string n;
    std::cin >> n;
    int lucky_counter = 0;
    for (int i = 0; i<n.size(); i++) {
        if (n[i] == '4' || n[i] == '7') {
            lucky_counter += 1;
        }
    }    
    if (lucky_counter == 4 || lucky_counter == 7) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}