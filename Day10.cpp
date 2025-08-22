                                              // DAY 10 - "NEXT ROUND"

#include <iostream>
#include <vector>
int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> scores(n);
    for(int i =0; i<n; i++) {
        std::cin >> scores[i];
    }
    int qualifier = scores[k-1];
    int count = 0;
    for (int i=0; i<n; i++) {
        if (scores[i] >= qualifier && scores[i] > 0) {
            count += 1;
        }
    }
    std::cout << count << std::endl;
    return 0;
}