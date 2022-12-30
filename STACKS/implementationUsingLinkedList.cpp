#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


class Node{
    public:
        int data;
        Node* link;

        Node(int n){
            this->data = n;
            this->link = NULL;
        }
};

class Stack{
    Node* top;

    public:

    Stack(){
        top = NULL;
    }


    //push function
    void push(int data){
        Node* temp = new Node(data);

        if(!temp){
            cout<<"\nStack Overflow";
            exit(1);
        }

        temp->data = data;

        temp->link = top;

        top = temp;
    }

    //isEmpty Function

    bool isempty(){
        return (top==NULL);
    }

    //peek function
    int peek()
    {
        if(!isempty()){
            return top->data;
        }else{
            exit(1);
        }
    }


    //Funcction for pop 
    void pop(){
        Node* temp;

        //Check for stack underflow

        if(top==NULL){
            cout<<"\nStack Underflow"<<endl;
            exit(1);
        }else{
            temp = top;

            top = top->link;

            free(temp);
        }
    }


    //display function
    void display(){
        Node* temp;

        if(top == NULL){
            cout<<"\nStack Underflow"<<endl;
            exit(1);
        }else{
            temp = top;
            while(temp!=NULL){
                cout<<temp->data;

                temp = temp->link;

                if(temp!=NULL){
                    cout<<"->";
                }
            }
        }
    }
};
int main(){
    
    return 0;
}