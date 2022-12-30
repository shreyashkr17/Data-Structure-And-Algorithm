#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(stack<int> s, int count,int n){
    if(count == n/2){
        s.pop();
        return;
    }

    int num = s.top();
    s.pop();

    solve(s,count+1,n);

    s.push(num);

}
 
int main(){
    stack<int> s;
    int n=s.size();
    int count = 0;
    solve(s,count,n);
    return 0;
}