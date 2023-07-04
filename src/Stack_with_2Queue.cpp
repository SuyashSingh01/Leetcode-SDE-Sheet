#include<iostream>
#include<bits/stdc++.h>
#include<Queue>
using namespace std;
// -------implement stack using two queue---------

int push(int x){
queue<int>q1;
queue<int>q2;
q2.push(x);
while(!q1.empty()){
    q2.push(q1.front());
    q1.pop();
}
swap(q1,q2);
cout<<"top:"<<q1.top();
}
int pop(){
    q1.pop();
}
top(){
    return q1.front();
}

int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        push(arr[i]);
    }
}