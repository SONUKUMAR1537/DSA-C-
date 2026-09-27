#include<iostream>
using namespace std;
int main(){
    int arr[]={7,1,2,5,84,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxSum=INT_MIN;
    int maxIdx=-0;
    int prevSum=0;
    for(int i=0;i<n-k;i++){
        prevSum +=arr[i]; 
    }
    maxSum=prevSum;
    //Sliding window
    int i=1;
    int j=k;
    while(j<n){
        int prevSum=prevSum+arr[j]-arr[i-1];
        if(maxSum<prevSum){
            maxSum =prevSum;
            maxIdx=i;

        }
        i++;
        j++;
    }


    // tno= o(n)
    
    cout<<maxSum;
    cout<<maxIdx;
}