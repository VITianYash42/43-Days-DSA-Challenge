                                                     // DAY 05 - "FIZZ BUZZ"

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        std::vector<std::string> answer;
        for ( int i = 1; i<n+1; i++) {
            if (i % 5 == 0 && i % 3 == 0) {
                answer.push_back("FizzBuzz");
            }
            else if ( i % 3 == 0) {
                answer.push_back("Fizz");
            }
            else if ( i % 5 == 0) {
                answer.push_back("Buzz");
            }
            else {
                answer.push_back(std::to_string(i));
            }
        }
        return answer;
    }
};
int main() {
    Solution sol;
    int n = 15;
    vector<string> result = sol.fizzBuzz(n);
    for (const string& str : result) {
        cout << str << endl;
    }
    return 0;
}