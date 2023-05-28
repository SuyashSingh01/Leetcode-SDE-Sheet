#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Quick sort algorithm

int partition(int l ,int h,int *arr){

    int start=l,end=h;
    int pivot=arr[l];

    while(start<end){

        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
         end--;
        }
        if(start<end)swap(arr[start],arr[end]);
    }
    swap(arr[l],arr[end]);
    return end;
}

int quicksort(int l,int e,int arr[]){
    if(l<e){
        int loc= partition(l,e,arr);
        quicksort(l,loc-1,arr);
        quicksort(loc+1,e,arr);
    }
}
int main(){
    int arr[8]={7,6,3,4,9,2,1,20};
    quicksort(0,7,arr);
    cout<<"After sorting: "<<endl;
    for(int i=0;i<8;i++){
        cout<<arr[i];
    }
}