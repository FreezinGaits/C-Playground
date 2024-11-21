#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool areAnagrams(string str1, string str2) {
    if (str1.length() != str2.length()) return false;

    vector<int> count(256, 0); // Array to store character frequencies (256 for all ASCII characters)

    // Count frequencies for str1
    for (char c : str1) {
        count[c]++;
    }

    // Decrement frequencies for str2
    for (char c : str2) {
        count[c]--;
    }

    // Check if all counts are zero
    for (int i : count) {
        if (i != 0) return false;
    }

    return true;
}

int main() {
    string str1 = "listen";
    string str2 = "silent";

    if (areAnagrams(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
