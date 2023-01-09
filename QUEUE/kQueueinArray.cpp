#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class KQueue{
    public:
        int n;
        int k;
        int *front;
        int *rear;
        int freespot;
        int next;
    
    public:
        KQueue(int n, int k){
            this->n = n;
            this->k = k;
            front = new int[k];
            rear = new int[k];
            for(int i=0;i<k;i++){
                front[i] = -1;
                rear[i] = -1;
            }

            next = new int[n];
            for(int i=0;i<n;i++){
                next[i] = i+1;
            }
            next[n-1] = -1;

            arr = new int[n];
            freespot = 0;
        }

        void enqueue(int data,int qn){
            //overflow check
            if(freespot == -1){
                cout<<"No empty space is present in the array."<<endl;
                return;
            }

            //find first free index
            int index = freespot;

            //update freespot
            freeSpot = next[index];

            //check whether first element 
            if(front[qn-1] == -1){
                front[qn-1] = index;
            }else{
                //link new element to the previous element
                next[rear[qn-1]] = index;
            }

            //update next;
            next[index] = -1;

            //update rear
            rear[qn-1] = index;

            //push element
            arr[index] = data;
        }

        int dequeue(int qn){
            if(front[qn-1] == -1){
                cout<<"Queue is empty"<<endl;
                return -1;
            } 

            //find index to pop
            int index = front[qn-1];

            //front ko aage badhao
            front[qn-1] = next[index];

            //freeslots ko manage karo
            next[index] = freespot;
            freespot = index;

            return arr[index];
        }
}

int main(){
    
    return 0;
}