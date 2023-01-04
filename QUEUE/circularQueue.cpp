#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class CircularQueue{
    int *arr;
    int cqfront;
    int rear;
    int size;


    CircularQueue(int n){
        size = n;
        arr = new int[size];
        cqfront = -1;
        rear = -1;
    }

    bool enqueue(int value){
        if(( cqfront == 0 && rear = size-1) || (rear == (cqfront-1)%(size-1)) ){
            cout<<"Queue is Full"<<endl;
            return false;
        }else if(cqfront==-1){ //first element to push
            cqfront = rear = 0;
            
        }else if(rear == size-1 && cqfront!=0){
            rear = 0;
        }else{ // normal flow
            rear++;
        }
        // push inside the queue 
        arr[rear] = value;
        return true;
    }

    int dequeue(){
        if(cqfront == -1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ans = arr[cqfront];
        arr[cqfront] = -1;

        if(cqfront == rear){//single element is present
            cqfront = rear = -1;
        }else if(cqfront == size-1){
            cqfront = 0; // to maintain cyclic nature
        }else{ // normal flow
            cqfront++;
        }

        return ans;
    }
};

int main(){
    
    return 0;
}