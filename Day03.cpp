                                                // DAY 03 - "CONTAINS DUPLICATE"

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i =0; i<n-1; i++) {
            if (nums[i] == nums[i+1]) {
                    return true;
            }
        }
        return false;
    }
};
int main() {
    Solution sol;
    vector<int> my_nums = {1, 2, 3, 1};
    bool has_duplicates = sol.containsDuplicate(my_nums);
    if (has_duplicates) {
        cout << "The vector contains duplicates." << endl;
    } else {
        cout << "The vector does not contain duplicates." << endl;
    }

    return 0;
}