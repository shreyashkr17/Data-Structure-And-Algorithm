#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


bool Parenthesis(string parent){
    stack<char> s;
    for(int i=0;i<parent.length();i++){
        char ch = parent[i];

        if(ch=='(' || ch == '[' || ch=='{'){
            s.push(ch);
        }else{
            if(!s.empty()){
                char top = s.top();
                if((ch == ')' && top=='(') || (ch == '}' && top=='{') || (ch == ']' && top=='[')){
                    s.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
    }

    if(s.empty()){
        return true;
    }else{
        return false;
    }
}
int main(){
    
    return 0;
}