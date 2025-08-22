                                                // DAY 04 - "VALID ANAGRAM"

#include <iostream>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        if (t == s) {
            return true;
        }
        return false;
    }
};
int main() {
    Solution sol;
    string s1 = "anagram";
    string s2 = "nagaram";
    bool are_anagrams = sol.isAnagram(s1, s2);

    if (are_anagrams) {
        cout << "'" << s1 << "' and '" << s2 << "' are anagrams." << endl;
    } else {
        cout << "'" << s1 << "' and '" << s2 << "' are NOT anagrams." << endl;
    }
    return 0;
}