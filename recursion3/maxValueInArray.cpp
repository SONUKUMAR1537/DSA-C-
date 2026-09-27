#include<iostream>
using namespace std;

// void printMax(int arr[], int n, int idx, int max){
//     if(idx==n){ // base case
//         cout<<max;
//         return;
//     }
//     if(max<arr[idx]) max = arr[idx];
//     printMax(arr,n,idx+1,max);
// }

int maxInArray(int arr[], int n, int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxInArray(arr,n,idx+1));
}

int main(){
    int arr[] = {2,1,6,31,9,0,220,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    // printMax(arr,n,0,INT_MIN);
    cout<<maxInArray(arr,n,0);
}
