#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


struct Qnode{
    int data;
    Qnode* next;
    Qnode(int d){
        data = d;
        next = NULL;
    } 
};

struct Queue{
    Qnode *front,*rear;
    Queue(){
        front = NULL;
        rear = NULL;
    }

    void enQueue(int x){
        Qnode *temp = new Qnode(x);

        if(rear = NULL){
            front = rear = temp;
        }

        rear->next = temp;
        rear = temp;
    }

    void dequeue(){
        if(front == NULL){
            return;
        }

        Qnode *temp = front;
        front = front->next;

        if(front == NULL){
            rear = NULL;
        }

        delete temp;
    }
    void display(){
        Qnode *temp = front;
        if((front == NULL)&&(rear == NULL)) {
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Queue elements are: ";
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};



int main(){
    
    return 0;
}