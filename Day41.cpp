                                                      // DAY 41 - "PRESENTS" //

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> answer(n);
    for (int i = 0; i<n; i++) {
        int reciever_number;
        std::cin >> reciever_number;
        answer[reciever_number -1] = i + 1;
    }
    for (int i = 0; i<n; i++) {
        std::cout << answer[i] << " ";
    }
    return 0;
}