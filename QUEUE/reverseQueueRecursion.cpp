#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Time Complexity --> O(n);
//Space Complexity --> O(n);
void reverseQueue(queue<ll>& q){
    if(q.empty()){
        return;
    }

    ll int data = q.front();
    q.pop();

    reverseQueue(q);

    q.push(data);
}

int main(){
    
    return 0;
}