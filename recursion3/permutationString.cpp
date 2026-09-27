#include <iostream>
#include <string>
using namespace std;

// Recursive function to generate all permutations of a string
void permutations(string ans, string original) {
    // Base case: when original becomes empty
    if (original == "") {
        cout << ans << endl;
        return;
    }

    // Loop through each character of the current string
    for (int i = 0; i < original.length(); i++) {
        char ch = original[i];                     // pick character at index i
        string left = original.substr(0, i);       // substring before i
        string right = original.substr(i + 1);     // substring after i
        permutations(ans + ch, left + right);      // recursive call with chosen char
    }
}

int main() {
    string str = "abc";          // input string
    permutations("", str);       // start with empty answer
    return 0;
}
