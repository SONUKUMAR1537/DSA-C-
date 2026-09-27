#include <iostream>
#include <vector>
using namespace std;

// Recursive function to print all subsets of an array
void printSubset(int arr[], int n, int idx, vector<int>& ans) {
    // Base case: when index reaches the end of array
    if (idx == n) {
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }

    // Case 1: Exclude current element
    printSubset(arr, n, idx + 1, ans);

    // Case 2: Include current element
    ans.push_back(arr[idx]);
    printSubset(arr, n, idx + 1, ans);

    // Backtrack: remove last element to restore state
    ans.pop_back();
}

int main() {
    int arr[] = {1, 2, 3};                  // input array
    int n = sizeof(arr) / sizeof(arr[0]);   // size of array
    vector<int> v;                          // temporary vector to store subset
    printSubset(arr, n, 0, v);              // start recursion from index 0
    return 0;
}
