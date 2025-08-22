                                        // DAY 28 - "PANORAMIX'S PREDICTION"

#include <iostream>
#include <vector>
 
int main() {
    std::vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int n, m;
    std::cin >> n >> m;
    for (int i = 0; i<prime.size() - 1; i++) {
        if (prime[i] == n) {
            if (prime[i+1] == m) {
                std::cout << "YES" << std::endl;
                return 0;
            }
        }    
    }
    std::cout << "NO" << std::endl;
    return 0;
}