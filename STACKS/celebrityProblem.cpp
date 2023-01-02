// TIME COMPLEXITY : O(N^2)
// Space Complexity: O(N)



// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// #define N 8

// bool matrix[N][N] = {{0,0,1,0},
//                      {0,0,1,0},
//                      {0,0,0,0},
//                      {0,0,1,0}};

// bool knows(int a, int b){
//     return matrix[a][b];
// }

// int findCelebrity(int n){
//     vector<int> indegree(n),outdegree(n);

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             int x = knows(i,j);

//             outdegree[i]+=x;
//             indegree[j]+=x;
//         }
//     }

//     for(int i=0;i<n;i++){
//         if(indegree[i]==n-1 && outdegree[i] == 0){
//             return i;
//         }
//     }

//     return -1;
// }

// int main(){
//     int n = 4;
//     int id = findCelebrity(n);
//     id == -1 ? cout<<"No Celebrity"<<endl : cout<<"Celebrity ID"<<id<<endl;
//     return 0;
// }


//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH//SECOND APPROACH


//Time Complexity: O(N)
//Space Complexity: O(N)


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define N 8

bool matrix[N][N] = {{0,0,1,0},
                     {0,0,1,0},
                     {0,0,0,0},
                     {0,0,1,0}};

bool knows(int a, int b){
    return matrix[a][b];
}

int findCelebrity(int n){
    stack<int> s;

    int C;

    for(int i=0;i<n;i++){
        s.push(i);
    }

    while(s.size()>1){
        int A = s.top();
        s.pop();
        int B = s.top();
        s.pop();

        if(knows(A,B)){
            s.push(B);
        }else{
            s.push(A);
        }
    }

    C = s.top();
    s.pop();

    for(int i=0;i<n;i++){
        if((i!=C) && (knows(C,i)) || !knows(i,C)){
            return -1;
        }
    }

    return C;
}

int main(){
    int n = 4;
    int id = findCelebrity(n);

    id==-1 ? cout<<"No Celebrity"<<endl : cout<<"Celebrity ID: "<<id<<endl;
    return 0;
}



// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH// THIRD APPROACH


//Time Complexity: O(n);
//Space Complexity: O(1);

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 4

int celebrity(int M[N][N], int n){
    int i=0,j=n-1;

    while(i<j){
        if(M[j][i] == 1){
            j--;
        }else{
            i++;
        }
    }

    int candidate = i;

    for(i=0;i<n;i++){
        if(i!=candidate){
            if(M[i][candidate] == 0 || M[candidate][i]==1){
                return -1;
            }
        }
    }

    return candidate;
}
 
int main(){
    int M[N][N] = {{0,0,1,0},
                     {0,0,1,0},
                     {0,0,0,0},
                     {0,0,1,0}};

    int celebIdx = celebrity(M,4);

    if(celebIdx == -1){
        cout<<"No Celebrity"<<endl;
    }else{
        cout<<"Celebrity ID: "<<celebIdx<<endl;
    }
    return 0;
}