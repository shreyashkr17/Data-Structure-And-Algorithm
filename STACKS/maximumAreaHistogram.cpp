#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> smallernextElement(vector<int>& arr, int n){
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        int curr = arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> smallerPrevElement(vector<int>& arr, int n){
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int curr = arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int main(){
    vector<int> v = {6,2,5,4,5,1,6};
    int n = v.size();

    vector<int> next = smallernextElement(v,n);
    vector<int> prev = smallerPrevElement(v,n);

    int area = INT_MIN;

    for(int i=0;i<n;i++){
        int l = v[i];

        if(next[i] == -1){
            next[i] = n;
        }

        int b = next[i]-prev[i]-1;
        int newArea = l*b;
        area = max(area,newArea);
    }

    cout<<area<<endl;
    // cout<<n<<endl;
    return 0;
}