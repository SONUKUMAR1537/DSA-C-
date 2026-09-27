#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,4,5,6,9,12};
    int n = sizeof(arr)/sizeof(arr[0]);  // size of array
    int lo = 0;
    int hi = n-1;
    int ans = -1;

    while(lo <= hi){
        int mid = lo + (hi - lo)/2;

        if(arr[mid] == mid){   // fixed point condition
            lo = mid + 1;      // search right side
        } else {
            ans = mid;         // store index
            hi = mid - 1;      // search left side
        }
    }

    cout << ans;
    return 0;
}
