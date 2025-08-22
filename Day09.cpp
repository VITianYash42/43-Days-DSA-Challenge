                                                       // DAY 09 - "TEAM"

#include<iostream>
int main() {
    int n;
    std::cin >> n;
    int solution = 0;
    for (int i=1; i<=n; i++) {
        int a, b, c;
        std::cin >> a >> b >> c;
        if (a+b+c>=2) {
            solution += 1;
        }
    }
    std::cout << solution << std::endl;
    return 0;
}