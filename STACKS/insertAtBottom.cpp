#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(stack<int>& s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    solve(s,x);

    s.push(num);
}

stack<int> insertAtBottom(stack<int>& myStack, int x){
    solve(myStack,x);
    return myStack;
}
 
int main(){
    stack<int> s;
    int x;
    cin>>x;
    insertAtBottom(s,x);
    return 0;
}