#include<iostream>
using namespace std;

//---------program for merge sort ---------

void print(int arr3[]);

void merge(int arr1[],int n,int arr2[],int m,int arr3[] ){
int i=0,j=0;
int k=0;
    while(i<n && j<m){              //also written in this form
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];        // arr3[k++]=arr1[i++];   
            k++  ;
            i++;
         }
        else 
        {
        arr3[k]=arr2[j];            // arr3[k++]=arr2[j++];
        j++;        
        k++;
        }
    }
    while(i<n){
        arr3[k]=arr1[i];            // arr3[k++]=arr1[i++];
        i++;
        k++;
    }while(j<m){
        arr3[k]=arr2[j];            // arr3[k++]=arr2[j++];
        j++;
        k++;
    }


}
void print(int arr3[],int u){
    for(int k=0;k<u;k++){
        cout<<arr3[k]<<" ";
    }
}

int main(){

int arr1[5]={1,3,5,7,9};
int arr2[3]={2,4,6};
int arr3[8];
merge(arr1,5,arr2,3,arr3);
print(arr3,8);

}