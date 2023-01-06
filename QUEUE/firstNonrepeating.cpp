#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

string firstNonRepeating(string s){
    map<char,char> mp;
    string ans = "";
    queue<char> q;

    for(int i=0;i<s.length();i++){
        char ch = s[i];
        q.push(ch);
        mp[ch]++;

        while(!q.empty()){
            if(mp[q.front()]>1){
                q.pop();
            }else{
                ans.push_back(q.front);
                break;
            }
        }

        if(q.empty()){
            ans.push_back('#');
        }
    }

    return ans;
}

int main(){
    
    return 0;
}