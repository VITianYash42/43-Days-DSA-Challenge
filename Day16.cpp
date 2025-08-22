                                             // DAY 16 - "Bit++"

#include <iostream>
#include <string>
 
int main() {
    int n;
    std::cin >> n;
    int counter = 0;
    while (n--) {
        std::string operation;
        std::cin >> operation;
        if (operation == "++X" || operation == "X++") {
            counter += 1;
        }
        else {
            counter -= 1;
        }
    }
    std::cout << counter << std::endl;
    return 0;
}