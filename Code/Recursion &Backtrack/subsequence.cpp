#include<bits/stdc++.h>
#include<iostream>

using namespace std;
void subsequence(int i,int arr[],vector<int>&sq,int n){
    vector<int>df;
    if(i==n) {
    for(auto it:df)cout<<it<<" ";
    return ;
    }
    df.push_back(arr[i]);
    subsequence(i+1,arr,sq,n);
    df.pop_back();
    subsequence(i+1,arr,sq,n);

}

int main(){
    vector<int>sq;
    int arr[] = {9,4,7,2,10};
    // int a=0,b=2;
    // int c=a|b;
    // cout<<c;
    subsequence(0,arr,sq,4);
    return 0;
}