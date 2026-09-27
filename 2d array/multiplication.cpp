#include<iostream>
using namespace std;
int main (){
    int m; 
    cout<<"enter rows of 1st matrix:";
    cin>>m;
    int n;
    cout<<"enter cols of 1st matrix:";
    cin>>n;
    int p;
    cout<<"enter rows of 2nd matrix";
    cin>>p;
    int q;
    cout<<"enter  columns of 2nd matrix :";
    cin>>q;
     
    if(n==p){
        int a[m][n];
        int b[p][q];
        cout<<"enter elements of 1st matrix :";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
        
            }
        }
        cout<<"enter  elemets of 2nd matrix :";
        for(int i=0; i<p; i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];

            }
        }
        //reulstant matrix;
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0; j<q;j++){
                //multiply 
                res[i][j]= 0;
                for(int k=0; k<p;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }

            }
        }
        //print
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j];

            }
            cout<<endl;
        }

    }
    else{
        cout<<"The matrices cannot be multiplied";
    }
}