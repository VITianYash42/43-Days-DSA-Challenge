                                              // DAY 11 - "STRING TASK"

#include <iostream>
#include <string>
#include <cctype> 
 
bool vowel(char c) {
    return (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i');
}
 
int main() {
    std::string input;
    std::cin >> input;
    std::string result = "";
 
    for (char c : input) {
        char lower = tolower(c);
        if (!vowel(lower)) {
            result += '.';
            result += lower;
        }
    }
 
    std::cout << result << std::endl;
    return 0;
}