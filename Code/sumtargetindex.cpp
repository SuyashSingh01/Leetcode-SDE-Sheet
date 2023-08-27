//Given an array of integers nums and an integer target, 
//return indices of the two numbers such that they add up to target#include<iostream>
#include<iostream>
#include<string.h>
using namespace std;
class solution {
public:
int n1;
void getindex (int arr[6],int tarsum){
for(int i=0;i<6;i++){
n1=arr[i]+arr[i+1];       //     int arr[10]={1,5,3,4,6,8};
if(n1==tarsum){
cout<<"arr["<<i<<"]"<<"arr["<<(i+1)<<"]"<<endl;
break;
}
}                               //  cout<<"TARGET SUM IN CLASS : "<<arr[i]<<endl;
}

};
int main(){
    solution obj;
    int tarsum;
    int arr[6]={4,5,3,4,6,8};
    cout<<"Enter the target sum of elements in array: "<<endl;
    cin>>tarsum;
    cout<<"TARGET SUM : "<<tarsum<<endl;
    obj.getindex(arr,tarsum);
    return 0;
}
