                                                   // DAY 07 - "VALID PALINDROME"
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        std::string result = "";
        for (char i : s) {
            if (std::isalnum(i)) {
                result += std::tolower(i);
            }
        }
        string original = result;
        std::reverse(original.begin(), original.end());
        if (original == result) {
            return true;
        }
        return false;
    }
};
int main() {
    Solution sol;
    string test_string = "A man, a plan, a canal: Panama";
    bool is_pal = sol.isPalindrome(test_string);

    if (is_pal) {
        cout << "'" << test_string << "' is a palindrome." << endl;
    } else {
        cout << "'" << test_string << "' is NOT a palindrome." << endl;
    }
    return 0;
}




                                                   // DAY 07 - "WATERMELON(4A)"

#include <iostream>
using namespace std;
int main() {
    int w;
    cin >> w;
    if (w > 2 && w % 2 == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}