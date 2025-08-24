                                                          // DAY 31 - "I_love_%username%"

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> list(n);
    for (int i = 0; i<n; i++){
        std::cin >> list[i];
    }
    int amazing_counter = 0;
    int max_point = list[0];
    int min_point = list[0];
    for(int i = 1; i<list.size(); i++) {
        if (list[i] > max_point) {
            max_point = list[i];
            amazing_counter += 1;
        }
        if (list[i] < min_point) {
            min_point = list[i];
            amazing_counter += 1;
        }
    }
    std::cout << amazing_counter << std::endl;
    return 0;
}