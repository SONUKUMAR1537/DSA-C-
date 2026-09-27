#include <iostream>
#include <vector>
using namespace std;

// Recursively print array elements
void display(int arr[], int n, int idx) {
    if (idx == n) return;            // base case
    cout << arr[idx] << " ";         // print current element
    display(arr, n, idx + 1);        // recursive call for next index
}

// Recursively print vector elements
void display2(vector<int>& v, int idx) {
    if (idx == v.size()) return;     // base case
    cout << v[idx] << " ";           // print current element
    display2(v, idx + 1);            // recursive call for next index
}

int main() {
    int arr[] = {2, 1, 6, 3, 9, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = arr[i];
    }

    // Uncomment one of these to test:
    // display(arr, n, 0);   // prints array using recursion
    display2(v, 0);          // prints vector using recursion

    return 0;
}
