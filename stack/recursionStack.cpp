#include<iostream>
#include<stack>
using namespace std;
void displayRev(stack<int> & st){
    if(st.size()==0) return ;
    int x=st.top();
    cout<<x<<" ";
    st.top();
    displayRev(st);
    st.push(x);
}
void display(stack<int> & st){
    if(st.size()==0) return ;
    int x=st.top();
    st.pop();
    displayRev(st);
    cout<<x<<" ";
    // ye call ke baad lga hai cout toh reverse kr deta hai koi bhi x=cheez  recursion so ye insertion  ke normal order me aagaya 
    //normla stack  jab last call complete hoga uske baad usew pahle wal aise kr te krte reverse kr deta hai recursion ha
    st.push(x);
}

void pushAtBottom(stack<int> & st, int val){
       if(st.size()==0){ 
        st.push(val);
        return ;
    }
    int x=st.top();
    st.pop();
    displayRev(st);
    pushAtBottom(st,val);
    st.push(x);
}
void reverse(stack<int> & st){
    if(st.size()==1) return ;
    int x=st.top();
    st.pop();
    reverse(st);
    pushAtBottom(st,x);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
   // pushAtBottom(st,-10);
    cout<<endl;
    display(st);
    cout<<endl;
    reverse(st);
    display(st);
}