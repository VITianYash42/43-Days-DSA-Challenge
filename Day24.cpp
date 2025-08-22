                                           // DAY 24 - "ANTON AND DANIK"
 
#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    int counter_D = 0;
    int counter_A = 0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == 'A') {
            counter_A += 1;
        }
        else {
            counter_D += 1;
        }
    }
    if (counter_A > counter_D) {
        std::cout << "Anton" << std::endl;
    }
    else if (counter_A < counter_D) {
        std::cout << "Danik" << std::endl;
    }
    else {
        std::cout << "Friendship" << std::endl;
    }
    return 0;
}