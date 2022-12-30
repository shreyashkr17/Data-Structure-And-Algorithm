#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 

class TwoStack {
    int *arr;
    int top1;
    int top2;
    int size;
    
    public:
    //Initialize TwoStack
    TwoStack(int s){
        this->size = s;
        top1 = -1;
        top2 = size;
        arr = new int[s];
    }

    //Push in Stack1
    void push1(int num){
        if(top2-top1>1){
            top1++;
            arr[top1] = num;
        }else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    //Push in Stack2
    void push2(int num){
        if(top2-top1>1){
            top2--;
            arr[top2] = num;
        }else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    //POP1 from Stack1 and return popped element
    int pop1(){
        if(top1>=0){
            int ans = arr[top1];
            top1--;
            return ans;
        }else{
            return -1;
        }
    }

    //POP2 from stack2 and return the pop element
    int pop2(){
        if(top2<size){
            int ans = arr[top2];
            top2++;
            return ans;
        }else{
            return -1;
        }
    }
};
int main(){
    
    return 0;
}