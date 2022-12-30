//O(n)--> Time Complexity
//O(1)--> Space Complexity

//Using a Linked List Class
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
class StackNode{
    public:
        int data;
        StackNode *next;

        StackNode(int data){
            this->data = data;
            this->next = NULL;
        }
};

class Stack{
    StackNode *top;

    public:
        void push(int data){
            if(top==NULL){
                top = new StackNode(data);
                return;
            }

            StackNode *s = new StackNode(data);
            s->next = top;
            top = s;
        }

        StackNode* pop(){
            StackNode *s = top;
            top = top->next;
            return s;
        }

        void display()
        {
            StackNode *s = top;
            while(s != NULL){
                cout<<s->data<<" ";
                s= s->next;
            }
            cout<<endl;
        }

        void reverse(){
            StackNode *prev,*curr,*succ;
            // cout<<top<<endl;
            curr = prev = top;
            // cout<<curr<<" "<<prev<<endl;
            curr = curr->next;
            prev->next = NULL;

            while(curr!=NULL){
                succ = curr->next;
                curr->next = prev;
                prev = curr;
                curr = succ;
            }
            top = prev;
        }
};

int main(){
    Stack *s = new Stack();
    s->push(1);
    s->push(2);
    s->push(3);
    s->push(4);


    s->reverse();

    cout<<"reversed Stack:"<<endl;
    s->display();

    return 0;
}