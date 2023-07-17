#include<iostream>            
using namespace std;
//     ------------------  By  binary search    ----------- working properly ------------
//                 -----program to find the square root of n------

double   moreprecision(long long int temp,int p,int n);
// long long int squareinteger(int n);
long long int squareinteger(int n){
    int end=n;
    int start=0;
    long long int ans =-1;
    long long int mid=start+(end-start)/2;
   while(start<end){
    long long int square= mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans =mid;
            start=mid+1;
        }
        else                                                 //if (square>n)    
        end=mid-1;                                              
         
    mid=start+(end-start)/2;
    }
}
double moreprecision( int temp,int p,int n){
    double factor=1;
    double ans=temp;
    for(int i=0;i<p;i++){
       factor =factor/10;
     for(double j=ans;j*j<=n;j=j+factor){                 //j*j<n changed
        ans =j;
      }
    } 
    return ans;
}
int main(){
    int n,p=0;
    cout <<"enter the number:="<<endl;
    cin>>n;
    int temp =squareinteger(n);
    cout <<"how precious you want answer after decimal :="<<endl;
    cin>>p;
    cout<<"Answer is := "<<moreprecision(temp,p,n);
    return 0;
}
