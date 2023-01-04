#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    queue<int> q;

    q.push(11);

    q.push(15);
    
    q.push(13);

    cout<<"Front element is: "<<q.front()<<endl;
    cout<<"Rear element is: "<<q.back()<<endl;

    cout<<"Size of queue is : "<<q.size()<<endl;

    q.pop();

    cout<<"Size of queue after pop function is : "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is empty "<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }


    return 0;
}