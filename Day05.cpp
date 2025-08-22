                                    // DAY 05 - "FIND NUMBERS WITH EVEN NUMBER OF DIGITS"

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for ( int i = 0; i<n; i++) {
            std:: string s = std::to_string(nums[i]);
            if (s.length() % 2 == 0) {
                count += 1;
            }
        }
        return count;
    }
};
int main() {
    Solution sol;
    vector<int> my_nums = {12, 345, 2, 6, 7896};
    int result = sol.findNumbers(my_nums);
    cout << "Numbers with an even number of digits: " << result << endl;
    return 0;
}