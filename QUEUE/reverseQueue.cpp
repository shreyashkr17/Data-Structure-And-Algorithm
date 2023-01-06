#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Time Complexity --> O(n);
//Space Complexity --> O(n);

queue<int> rev(queue<int> q){
    stack<int> s;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }

    return q;
}

int main(){
    
    return 0;
}