#include<iostream>
using namespace std;
// program to calculate the factorial 
int factorial(int n1){
    int fac=1;
    for(int i=1;i<=n1;i++){
        fac=fac*i;
    }
    return fac;
}
int main(){
    int n1,ans;
    cout<<"ENTER THE NUMBER TO CALCULATE THE FACTORIAL : "<<endl;
    cin>>n1;
    ans=factorial(n1);
    cout<<"FACTORIAL: "<<ans;
    return 0;
}
