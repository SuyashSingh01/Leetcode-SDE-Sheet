#include<iostream>
using namespace std;

// ----program for insertion sort-----

int print(int arr[],int n);
int insertionsort(int arr[],int n){
   for(int i=1;i<=n;i++){                              // index    0 1 2 3 4 5
    int temp =arr[i];                                   //arr[6]={ 1,3,5,2,4,6 };
    int j=i-1;
    for(;j>=0;j--){
        if(arr[j]>temp)
        {
            // cout<<"arr[j] :"<<arr[j]<<endl;
        arr[j+1]=arr[j];
            // cout<<"arr[i]"<<arr[i]<<endl;
        }
        else{
            // cout<<"arr[j] in else :"<<arr[j]<<endl;
            // cout<<"arr[i] in else :"<<arr[i]<<endl;
            break;
        }
    }
    arr[j+1]=temp;
    }
}
int print(int arr[],int n){
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
}
int main(){

    int arr[6]={1,3,5,2,4,6};
    print(arr, 6);
    insertionsort(arr,6);
    cout<<endl;
    print(arr, 6);
}