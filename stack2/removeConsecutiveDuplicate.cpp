#include<iostream>
#include<stack>
using namespace std;
string removeDuplicates(string s){
stack<char> st;
for(int i=0;i<s.length();i++){
    if(s[i]!=st.top()) st.push(s[i]);
}
s="";
while(st.size()>0){
    s +=st.top();
    st.pop();
}
reverse (s.begin(),s.end());
return s;
}
int main(){
    
    string s="aaabbcddaabffg";
    cout<<
}