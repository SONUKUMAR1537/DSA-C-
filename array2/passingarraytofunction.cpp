#include<iostream>
using namespace std;
void display (int a[]){
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[]){
b[0] =100;
}
int main (){
    int arr[5]={1,4,2,7,46};
//accesing the elements of array in another function 
//updation
display(arr);
change(arr);
display(arr);
}