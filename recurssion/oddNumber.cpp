#include<iostream>
 using namespace std;
 int oddNumber(int a ,int b){
    while(a<b){
        if(a%2==0){
            return oddNumber(a+1,b);
        }
        else{
            return oddNumber(a+2,b);
        }
    } ;
 };

 
 
 int main() {
        