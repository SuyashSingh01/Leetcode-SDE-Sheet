#include<bits/stdc++.h>
using namespace std;


vector<int> getSecondOrderElements(int n, vector<int> arr) {
 int sl=INT_MIN;
 int ss=INT_MAX;
 int l=arr[0],s=arr[0];
 for(int i=0;i<n;i++){
     if(arr[i]>l){
         sl=l;
         l=arr[i];
     }
     else if(arr[i]<l&&arr[i]>sl)sl=arr[i];
     if (arr[i] < s) {
         ss = s;
         s = arr[i];
     } 
     else if (arr[i] > s && arr[i] < ss)
         ss = arr[i];
 }
     return {sl,ss};

}
int main(){
    vector<int>arr={1,23,4,5,6};
    vector<int>ans=getSecondOrderElements(5,arr);
    return 0;
}