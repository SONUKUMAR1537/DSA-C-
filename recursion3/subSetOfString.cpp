#include <iostream>
#include <string>
using namespace std;

// Recursive function to print all subsets of a string
void printSubset(string ans, string original) {
    // Base case: when original string becomes empty
    if (original == "") {
        cout << ans << endl;  // print the current subset
        return;
    }

    // Take the first character
    char ch = original[0];

    // Recursive call including the current character
    printSubset(ans + ch, original.substr(1));

    // Recursive call excluding the current character
    printSubset(ans, original.substr(1));
}

int main() {
    string str = "abc";   // input string
    printSubset("", str); // start with empty answer
    return 0;
}
