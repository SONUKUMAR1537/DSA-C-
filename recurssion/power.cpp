#include<iostream>
 using namespace std;
 int power(int a ,int b ){
    if(a==0 && b==0){
        cout<<"raised to the power 0 is not defined";

        return -100;

    }
    if(a==0) return 0;
    int p=1;
    for(int i=1;i<b; i++){
        p *=a;
    }
    return p;
 }
 int pow(int a,int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
 }
 int main(){
    int a;
    cout<<"enter base:";
    cin>>a;
    int b;
    cout<<"enter expinenet:";
    cin>>b;
    cout<<a<<"raise to the power"<<b<<"is"<<pow(a,b);

 }