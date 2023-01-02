#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Nstack
{
    int *arr;
    int *top;
    int *next;

    int n,s;

    int freespot;

    public:
        Nstack(int N, int S){
            n = N;
            s = S;
            arr = new int[s];
            top = new int[n];
            next = new int[s];

            for(int i=0;i<n;i++){
                top[i] = -1;
            }

            //next initialise
            for(int i=0;i<s;i++){
                next[i] = i+1;
            }

            next[s-1] = -1;

            freespot = 0;
        }

        bool push(int x, int m){
            if(freespot = -1){
                return false;
            }

            //find freespot in the array
            int index = freespot;
            //placing the element in the array in the particular stack
            arr[index] = x;

            //updating freespot
            freespot = next[index];
            //updating next array
            next[index] = top[m-1];
            //updating top
            top[m-1] = index;

            return true;
        }

        int pop(int m){
            int index = top[m-1];
            top[m-1] = next[index];
            next[index] = freespot;
            freespot = index;

            return arr[index];
        }
};

int main(){
    
    return 0;
}