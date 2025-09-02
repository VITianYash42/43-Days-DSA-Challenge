                                              // DAY 40 - "MAGNETS" //

#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    int groups_counter = 1;
    std::string first;
    std::cin >> first;
    
    for (int i = 1; i<n; i++) {
        std::string next;
        std::cin >> next;
        if(first != next) {
                groups_counter += 1;
            }
            first = next;
    }
    std::cout << groups_counter << std::endl;
    return 0;
}