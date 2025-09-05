                                     // DAY 43 - "TWINS" //

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    int total_sum = 0;
    std::vector<int> values(n);
    for (int i = 1; i<=n; i++) {
        std::cin >> values[i];
        total_sum += values[i];
    }
    std::sort(values.begin(), values.end());
    std::reverse(values.begin(), values.end());
    int my_sum = 0;
    int no_of_coins = 0;
    for (int i = 0; i<n; i++) {
        my_sum += values[i];
        no_of_coins += 1;
        int remaining = total_sum - my_sum;
        if (my_sum > remaining) {
            break;
        }
    }
    std::cout << no_of_coins << std::endl;
    return 0;
}