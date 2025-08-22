                                                    // DAY 08 - "WAY TOO LONG WORDS"

#include <iostream>
#include <string>
using namespace std;
 
int main() {
 
    int n;
    std::cin >> n;
    for (int i = 1; i<=n; i++) {
        string w;
        std::cin >> w;
        int d = w.length() - 2;
        if (w.length() > 10) {
            std::cout << w[0] << d << w[w.length()-1] << std::endl;
        }
        else {
            std::cout << w << std::endl;
        }
    }
    return 0;
};