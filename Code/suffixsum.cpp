#include<iostream>
#include<vector>
#include<stack>
#include<cmath>
#include<string>
#include<algorithm>
// #include<bits/stdc++.h>

using namespace std;

int main(){
   int arr[]={1,2,3,4,5,6,7,8};
   int n =sizeof(arr)/sizeof(arr[0]);
   int Tsum=0;
   for(int i=0;i<n;i++)Tsum+=arr[i];
   int prefix_sum=0;
   for(int i=0;i<n;i++){
   prefix_sum+=arr[i];                                           // prefix sum == 1 3 6 10 15 21 28 36 
    arr[i]=Tsum-prefix_sum;
   }
   for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    
//O/P
// 35 33 30 26 21 15 8 0 
    
}