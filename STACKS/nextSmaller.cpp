#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> nextSmaller(vector<int>& arr, int n){
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int curr = arr[i];
        while(s.top() >= curr){
            s.pop();
        }

        ans[i] = s.top();
        s.push(i);
    }

    return ans;
}

int main(){
    
    return 0;
}