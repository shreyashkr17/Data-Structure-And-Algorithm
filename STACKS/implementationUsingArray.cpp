//Follows LIFO Method --> Last In First Out

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Stack{
    //properties
    public:
        int *arr;
        int top;
        int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){ //O(1) complexity
        if(size-top>1){
            top++;
            arr[top] = element;
        }else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){//O(1) complexity
        if(top >= 0){
            top--;
        }else{
            cout<<"Stack UnderFlow"<<endl;
        }
    }

    int peek(){//O(1) complexity
        if(top >=0){
            return arr[top];
        }else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){//O(1) complexity
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }
};
 
int main(){
    // stack<int> s;

    // //push operation
    // s.push(2);
    // s.push(3);


    // //pop operation
    // s.pop();

    // cout<<"Priniting the top element is:"<<s.top()<<endl;


    // if(s.empty()){
    //     cout<<"Stack is Empty"<<endl;
    // }else{
    //     cout<<"Stack is not empty"<<endl;
    // }



    //Implementation of Stack using Class 
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);

    cout<<"Top element in the Stack is:"<<st.peek()<<endl;
    st.pop();

    cout<<"Top element in the Stack is:"<<st.peek()<<endl;

    return 0;
}