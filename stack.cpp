#include<iostream>
using namespace std;
int main(){
    //creation of stack

    stack<int>st;


    //insertion in stack
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    //size of stack
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;

    //deletion of elements in stack pop()
    st.pop();
    //top element of stack
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;



}