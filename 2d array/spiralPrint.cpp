#include<iostream>
#include<vector>
using namespace std;
int maain(){
    int m;
    cout<<"enter rows of matrix";
    cin>>m;
    int n;
    cout<<"enter cols of matrix:";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];

        }
    }
    cout<<endl;
    //spiral
    int minr=0; int minc=0;
    int maxr=n-1;
    int maxc=n-1;
    int tne=n*m;
    int count;
    while(minr<=maxr&& minc<=maxc){
        //right
        for(int j=minc;j<=maxc && count<tne; j++){
            cout<<arr[minr][j]<<" ";
            count++;
        }
        minr++;
        //down
    }

}