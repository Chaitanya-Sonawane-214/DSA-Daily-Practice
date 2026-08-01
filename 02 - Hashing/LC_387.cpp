#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;

        // Step 1: count frequencies
        for (char c : s) {
            freq[c]++;
        }

        // Step 2: find index of first char with count 1
        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    Solution sol;
    cout << sol.firstUniqChar("leetcode") << endl;      // 0
    cout << sol.firstUniqChar("loveleetcode") << endl;  // 2
    cout << sol.firstUniqChar("aabb") << endl;           // -1
    return 0;
}