#include<iostream>
using namespace std;

// -----------------program for selection sort-----------

int selectionsort(int arr[],int n){

    for(int i=0;i<n-1;i++){
    int minindex=i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex])
            minindex  = j;
    
        }
        swap(arr[minindex],arr[i]);
    }
}


int main(){

    int arr[6]={1,3,5,2,4,6};
    selectionsort(arr,6);
    for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}