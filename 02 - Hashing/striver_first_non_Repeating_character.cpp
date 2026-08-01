#include <iostream>
#include <unordered_map>
using namespace std;

char firstNonRepeating(const string& s) {
    unordered_map<char, int> freq;

    // Step 1: count frequencies
    for (char c : s) {
        freq[c]++;
    }

    // Step 2: find first char with count 1
    for (char c : s) {
        if (freq[c] == 1) {
            return c;
        }
    }

    return '\0'; // no non-repeating character found
}

int main() {
    string s = "swiss";

    char result = firstNonRepeating(s);

    if (result != '\0')
        cout << "First non-repeating character: " << result << endl;
    else
        cout << "No non-repeating character found." << endl;

    return 0;
}