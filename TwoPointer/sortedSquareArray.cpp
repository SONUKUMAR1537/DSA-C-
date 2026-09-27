#include<iostream> 
#include<vector> // Error 1: Yeh header missing tha
#include<cmath>  // abs() function ke liye
using namespace std; 

void sortedSquaredArray(vector<int> &v ){ 
    vector<int> ans; 
    int left_ptr = 0; 
    int right_ptr = v.size() - 1; 

    // Error 2: '<=' kiya taaki aakhri single element bhi include ho jaye
    while(left_ptr <= right_ptr){ 
        if(abs(v[left_ptr]) < abs(v[right_ptr])){ 
            ans.push_back(v[right_ptr] * v[right_ptr]); 
            right_ptr--; // Error 3: 'right_ptr;' ko 'right_ptr--' kiya
        } 
        else{ 
            ans.push_back(v[left_ptr] * v[left_ptr]); 
            left_ptr++; 
        } 
    } 

    // Note: Yeh loop elements ko bade se chote (descending) order mein print karega
    for(int i = 0; i < ans.size(); i++){ // Error 4: v.size() ki jagah ans.size() use hoga
        cout << ans[i] << " "; 
    } 
    cout << endl; 
} 

int main(){ 
    int n; 
    cin >> n; 
    vector<int> v; 
    for(int i = 0; i < n; i++){ 
        int ele; 
        cin >> ele; 
        v.push_back(ele); 
    } 
    sortedSquaredArray(v); 
    return 0; 
}
