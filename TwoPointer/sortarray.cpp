#include<iostream> 
#include<vector> 
using namespace std; 

void sortZeroesAndOnes(vector<int> &v){ 
    int zeroes_count = 0; 
    
    // 0s ko count karne ke liye
    for(int ele : v){ 
        if(ele == 0){ 
            zeroes_count++; 
        } 
    } 
    
    // Vector ko update karne ke liye
    for(int i = 0; i < v.size(); i++){ 
        if(i < zeroes_count){ 
            v[i] = 0; 
        } 
        else{ 
            v[i] = 1; 
        } 
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
