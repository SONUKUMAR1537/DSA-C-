#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Recursive function to store subsets without duplicates
void storeSubset(string ans, string original, vector<string> &v, bool flag) {
    if (original.empty()) {
        v.push_back(ans);
        return;
    }

    char ch = original[0];
    string rest = original.substr(1);

    // Case 1: Include current character if allowed
    if (flag) {
        storeSubset(ans + ch, rest, v, true);
    }

    // Case 2: Exclude current character
    // If next character is same as current, set flag = false to avoid duplicates
    if (!rest.empty() && rest[0] == ch) {
        storeSubset(ans, rest, v, false);
    } else {
        storeSubset(ans, rest, v, true);
    }
}

int main() {
    string str = "aaabbc";          // input string with duplicates
    sort(str.begin(), str.end());   // sort to group duplicates together
    vector<string> v;

    storeSubset("", str, v, true);

    // Print all unique subsets
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}
