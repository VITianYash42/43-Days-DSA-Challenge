                                                // DAY 19 - "ROMAN TO INTEGER"

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map<char, int> roman_values = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int total = roman_values[s.back()];

        for (int i = s.length() - 2; i >= 0; i--) {
            int current = roman_values[s[i]];
            int right = roman_values[s[i + 1]];
            if (current < right) {
                total -= current;
            } 
            else {
                total += current;
            }
        }

        return total;
    }
};  
int main() {
    Solution sol;
    string test_string = "MCMXCIV";
    int result = sol.romanToInt(test_string);
    cout << "The integer value of " << test_string << " is: " << result << endl; // Expected: 1994
    return 0;
}                                       