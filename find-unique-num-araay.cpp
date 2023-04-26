#include<iostream>
using namespace std;
int findfun(int arr[],int size);

// program to find the unique number when each element are twice except one from the array

int main(){
    int arr[5]={1,9,1,4,4};
    int i=0;
    int length=(sizeof(arr)/sizeof(arr[0]));
    cout<<"The numbers in array : "<<endl;
        for(int i=0;i<length;i++){
            cout<<arr[i]<<" ";
        }
    cout<<endl<<"The numbers in array : "<<endl;
   // findfun(arr,length);
    cout<<findfun(arr,length)<<endl;
    return 0;
    }
  // here find func
   
int findfun(int arr[],int size) {
    int ans=0 ;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
        cout<<ans<<"\t";               // to check every time value 
    }
        cout<<endl;               // to check every time value 
        return ans;
       
}
    