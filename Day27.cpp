                                               // DAY 27 - "ULTRA FAST MATHEMATICIAN"

#include <iostream>
#include <string>

int main () {
    std::string s1;
    std::cin >> s1;
    std::string s2;
    std::cin >> s2;
    std::string answer = "";
    for (int i = 0; i< s1.size(); i++) {
        if (s1[i] == s2[i]) {
            answer += '0';
        }
        else {
            answer += '1';
        }
    }
    std::cout << answer << std::endl;
    return 0;
}