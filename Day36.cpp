                                                   // DAY 36 - "BEAUTIFUL MATRIX" //

#include <iostream>
#include <cmath>

int main() {
    int row_of_1 = -1;
    int coloumn_of_1 = -1;
    int element;
    for (int i = 0; i <5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cin >> element;
            if (element == 1) {
                row_of_1 = i;
                coloumn_of_1 = j;
            }
        }
    }
    int moves = std::abs(row_of_1 - 2) + std::abs(coloumn_of_1 - 2);
    std::cout << moves << std::endl;
    return 0;
}
