#include<iostream>
using namespace std;
int main(){
    int arr[]={4,1,6,2,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"",
    }
    cout<<endl;
    //cycle sort
    int i=0;
    while(i<n){
        int correctIdx=arr[i]-1;
        if(i==correctIdx) i++;
        else swap(arr[i],arr[correctIdx]);

    }
    for(int i=0;i<n;i++){

        cout<<arr[i]<<""
    }
    cout<<endl;
}
  //cycle sort
    int i=0;
    while(i<n){
        int correctIdx=nums[i];
        if(i==correctIdx) i++;
        else swap(nums[i],nums[correctIdx]);

    }
    for(int i=0;i<n;i++){
     if(nums[i]=i+1)
     return  i+1 ;
    }
