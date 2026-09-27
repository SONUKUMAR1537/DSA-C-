#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // // printing in reverse order -> empty in stack
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();

    // }
    

    // we will use extra stack
    stack<int> temp;
      while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    // putting elements back from temp to st
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    //      stack<int> temp;
    //   while(st.size()>0){
    //     
    //     temp.push(st.top());
    //     st.pop();
    // }
    // // putting elements back from temp to st
    // while(temp.size()>0){
     //   cout<<st.top()<<" ";   normal order printing  10,20,30,40,50 in terms of insertion 
    //  here we dicusssed soir taught m enormla  insertion first 10,20,30,40,50 then reverse is 50,40,30,20,10 and normal is as we dicusssed in first .
    //     st.push(temp.top());
    //     temp.pop();
    // }
    cout<<endl<<st.top();
}