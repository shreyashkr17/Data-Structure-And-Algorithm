#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> printFirstNegativeInteger(ll int arr[],ll int N,ll int K){
    deque<int> dq;
    vector<ll> ans;

    for(int i=0;i<K;i++){
        if(arr[i]<0){
            dq.push_back(i);
        }
    }

    if(dq.size()>0){
        ans.push_back(A[dq.front()]);
    }else{
        ans.push_back(0);
    }

    for(int i=K;i<N;i++){
        if(!dq.empty() && (i-dq.front())>=K){
            dq.pop_front();
        }

        if(arr[i]<0){
            dq.push_back(i);
        }

        //then push current element
        if(dq.size()>0){
            ans.push_back(arr[dq.front()]);
        }else{
            ans.pop_back(0);
        }
    }

    return ans;
}


//second ways
void printFirst(int arr[], int n, int k){
    bool flag;

    for(int i=0;i<(n-k+1);i++){
        flag = false;
        for(int j = 0;j<k;j++){
            if(arr[i+j]<0){
                cout<<arr[i+j]<<" ";
                flag=true;
                break;
            }
        }

        if(!flag){
            cout<<0<<" ";
        }
    }
}

int main(){
    return 0;
}