                                             // DAY 14 - "HELPFUL MATHS"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int main() {
    std::string s;
    std::cin >> s;
    std::string digits = "";
    for (char c : s) {
        if (c != '+') {
            digits += c;
        }
    }
 
    std::sort(digits.begin(), digits.end());
    std::string result = "";
    for (int i = 0; i < digits.length(); i++) {
        result += digits[i];
        if (i < digits.length() - 1) {
            result += '+';
        }
    }
    std::cout << result << std::endl;
    return 0;
}