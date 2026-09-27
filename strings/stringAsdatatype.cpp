#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "ragahav garag";
    cout << "Original: " << str << endl;
    cout << "Length: " << str.length() << endl;
    cout << "First 6 chars: " << str.substr(0, 6) << endl;
    cout << "Position of 'gar': " << str.find("gar") << endl;
    return 0;
}