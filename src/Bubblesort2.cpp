#include<iostream>
#include<bits/stdc++.h>
//#include<conio.h> 
using namespace std;     
//int print(int a[],int n);

int bubblesort(int a[],int n){
   int i,j;
   for(i=1;i<n;i++){
      // for round 1 to n-1........
    for(j=0;j<n-i;j++){
      if(a[j]>a[j+1]){                                     // temp=a[i];
          swap(a[j],a[j+1]);                               //a[i]=a[j];
      }                                                   //a[j]=temp;*/
 }
 //round++;
 }
 //cout<<"\n number of passes taken to sort the list:"<<round<<endl;
}
int print(int a[],int n){
   for(int i=0;i<n;i++){
      cout<<a[i]<<"\t";
   }
}

int main()
{
 int a[10]={10,2,0,14,43,25,18,1,5,45};
 cout<<"Input list..."<<endl;
 print(a,10);
 cout<<endl;
 cout<<"sorted element list..."<<endl;
 bubblesort(a,10);
 print(a,10);
 return 0;
}
