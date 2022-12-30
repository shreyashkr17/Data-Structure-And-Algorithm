#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool findRedundantBrackets(string &s){
    stack<int> st;

    for(int i=0;i<s.length();i++){
        char ch = s[i];

        if(ch == '(' || ch=='+' || ch=='-' || ch=='*'||ch=='/'){
            st.push(ch);
        }else{
            if(ch == ')'){
                bool flag = true;

                while(st.top() != '('){
                    char top = st.top();

                    if(top == '+' || top=='-' || top=='*' || top=='/'){
                        flag = false;
                    }
                    st.pop();
                }

                if(flag==true){
                    return true;
                }

                st.pop();
            }
        }
    }

    return false;
}

int main(){
    
    return 0;
}