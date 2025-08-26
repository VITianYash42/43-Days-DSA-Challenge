                                               // DAY 33 - "YOUNG PHYSICIST" //

#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    int sum_x = 0; 
    int sum_y = 0; 
    int sum_z = 0;
    while (n--) {
        int x, y, z;
        std::cin >> x >> y >> z;
        sum_x += x, sum_y += y, sum_z += z;
    }    
    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
        std::cout << "YES" << std::endl;
        return 0;
    }
    std::cout << "NO" << std::endl;
    return 0;
}