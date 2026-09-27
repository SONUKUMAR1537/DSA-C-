#include<iostream> 
#include<vector> 
using namespace std;


//Two pointer approach 

void sortZeroesAndOnes(vector<int> &v){ 
     int left_ptr=0;
     int right_ptr= v.size()-1;
     while(left_ptr<right_ptr){
        if(v[left_ptr]==1  && v[right_ptr]==0){
            v[left_ptr++]=0;
            v[right_ptr--]=1;
        }
     } if(v[left_ptr]==0){
        left_ptr++;

     }
     if(v[right_ptr]==1){
        right_ptr--;
     }
} 
int main(){ 
    int n; 
    cin >> n; 
    vector<int> v; 
    
    for(int i = 0; i < n; i++){ 
        int ele; // `:` ki jagah `;` use hoga
        cin >> ele; 
        v.push_back(ele); 
    } 
    
    sortZeroesAndOnes(v); 

    // Output dekhne ke liye vector ko print karein
    for(int ele : v){
        cout << ele << " ";
    }
    cout << endl;

    return 0; 
}
