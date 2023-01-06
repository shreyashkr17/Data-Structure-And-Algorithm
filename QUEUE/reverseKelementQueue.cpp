#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Time Complexity : O(n);
//Space Complexity : O(k);

queue<int> modifyQueue(queue<int> q, int k){
    stack<int> s;

    for(int i=0;i<k;i++){
        int val =q.front();
        q.pop();
        s.push(val);
    }

    while(!s.empty()){
        int val = s.top();
        q.pop();
        q.push(val);
    }

    int t = q.size()-k;

    while(t--){
        int val = q.front();
        q.pop();
        q.push(val);
    }
}

int main(){
    
    return 0;
}