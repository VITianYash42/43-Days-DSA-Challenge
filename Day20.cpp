                                       // DAY 20 - "QUEUE AT THE SCHOOL"

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
 
int main() {
    int n,t;
    std::cin >> n >> t;
    std::string s;
    std::cin >> s;
    std::vector<char> S(s.begin(), s.end());
    while (t--) {
        int i =0;
        while (i < n-1) {
            if(S[i] == 'B' && S[i+1] == 'G') {
            std::swap(S[i], S[i+1]);
            i += 2;
            }
            else {
                i++;
            }
        }    
    }
    for (int i =0; i<n; i++) {
        std::cout << S[i];
    }
    std::cout << std::endl;
    return 0;
}