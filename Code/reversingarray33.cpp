#include<iostream>
using namespace std;
//program to reverse an array 

/*void printarray(int arr);
int takearray(int arr){
    for(int i=0;i<100;i++){
   cin>>arr[i];
    }
}*/
//class fun{};
void printarray(int arr[]){
    for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
class fun{
public:
void reverse(int arr[]){
cout<<"Reverse Element of array  : "<<endl;
for(int i=9;i>=0;i--){
cout<<arr[i]<<" ";
}
}
};
int main(){
fun C;
int arr[10]={1,2,3,4,5,6,7,8,9,10};
cout<<"Element in array : "<<endl;
//takearray(arr);
//printarray(arr)
printarray(arr);
C.reverse(arr);
return(0);
}