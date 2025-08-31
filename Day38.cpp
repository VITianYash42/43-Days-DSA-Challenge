                                                // DAY 38 - "DOMINO PILING" //

#include <iostream>

int main() {
    int M, N;
    std::cin >> M >> N;
    int area = M*N;
    int no_of_dominos = area/2;
    std::cout << no_of_dominos << std::endl;
    return 0;
}