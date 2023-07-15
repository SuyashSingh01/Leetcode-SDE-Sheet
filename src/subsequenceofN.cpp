#include<iostream>
#include<vector>
using namespace std;

void  print(int i,int n,vector<int>v,vector<int>arr){
    if(i>n){
    if(v.size()>0){
for(auto it:v)cout<<it<<" ";
    cout<<endl;}
    return ;
    }
    print(i+1 ,n,v,arr);
    v.push_back(arr[i]);
    print(i+1,n,v,arr);
    v.pop_back();
}

int main() {
  
    int n,sum=0;
    vector<int>v,arr;
    arr={1,2,3};
    // cin>>n;
    print(0 ,2,v,arr);
}