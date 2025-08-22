                                         // DAY 22 - "WORD"

#include <iostream>
#include <string>
#include <cctype>

int main () {
    std::string s;
    std::cin >> s;
    int upper_count = 0;
    int lower_count = 0;
    for (char i : s) {
        if(isupper(i)) {
            upper_count += 1;
        }
        else {
            lower_count += 1;
        }
    }
    for (int i=0; i <s.length(); i++) {
        if (upper_count > lower_count) {
            s[i] = toupper(s[i]);
        }
        else {
            s[i] = tolower(s[i]);
        }
    }
    std::cout << s << std::endl;
    return 0;
}