#include<iostream>
using namespace std;
int main(){
    int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);   // pehle declare karo
    int k=4;
    int p=-1;
    int ans[n-k+1];

    // tumhari logic yahan chal rahi hai (sir wali)
    for(int i=0;i<k;i++){ 
        int sum=0;
        for(int j=i;j<i+k;j++){ 
            if(arr[i]<0){
                p=i;
                break;
            }
        }
        if(p==-1) ans[0]=1;
        else  ans[0]= arr[p];

        int s=1;
        int j=k;
        while(j<n){
            if(p>=s) ans[s]=arr[p];
            else{
                p=-1;
                for(int x=s;x<=j;x++){
                    if(arr[x]<0){
                        p=x;
                        break;
                    }
                }
                if(p !=-1) ans[s]=arr[p];
                else ans[s]=1;
            }
            s++;
            j++;
        }
    }

    // ✅ ab array print karni hai
    cout << "Array elements: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << "\nResult array: ";
    for(int i=0;i<n-k+1;i++){
        cout << ans[i] << " ";
    }
}
