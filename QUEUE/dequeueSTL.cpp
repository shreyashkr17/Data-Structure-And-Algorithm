#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    deque<int> d;

    d.push_front(12);
    d.push_back(14);

    cout<<"Front at the Queue: "<<d.front()<<endl;
    cout<<"Back at the Queue: "<<d.back()<<endl;

    //pop element from the front side
    d.pop_front();

    //check the Dequeue is empty or not 
    if(d.empty()){
        cout<<"Dequeue is empty."<<endl;
    }else{
        cout<<"Dequeue is not empty."<<endl;
    }
    return 0;
}