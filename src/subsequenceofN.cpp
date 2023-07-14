#include<iostream>
#include<vector>
using namespace std;

void  print(int i,int n,vector<int>v){
    if(i>n){
    for(auto it:v)cout<<it<<" ";
    cout<<endl;
    return ;
    }
    print(i+1 ,n,v);
    v.push_back(i);
    print(i+1,n,v);
    v.pop_back();
}

int main() {
  
    int n,sum=0;
    vector<int>v;
    cin>>n;
    print(1 ,n,v);
}