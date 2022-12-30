#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void sortedInsert(stack<int>& st, int num){
    if(st.empty() || (!st.empty() && st.top() < num)){
        st.push(num);
        return;
    }

    int n = st.top();
    st.pop();

    sortedInsert(st,num);

    st.push(n);
}

void sortStack(stack<int>& st){
    if(st.empty()){
        return;
    }

    int n = st.top();
    st.pop();

    sortStack(st);

    sortedInsert(st,n);
}
int main(){
    stack<int> st,st2;
    st.push(30);
    st.push(-5);
    st.push(18);
    st.push(14);
    st.push(-3);

    st2 = st;
    cout<<"Original Stack:"<<endl;
    while(!st2.empty()){
        cout<<st2.top()<<" ";
        st2.pop();
    }

    sortStack(st);

    cout<<"Sort Stack: "<<endl;
    while(!st.empty()){
        cout<<st2.top()<<" ";
        st2.pop();
    }
    cout<<endl;
    return 0;
}