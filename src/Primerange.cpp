#include<iostream>
using namespace std;

// not wroking currently

bool isprime(int n){
    // bool arr[]
    int m=n;
    int cnt=0;
    if(n<=1) return 0;
    if(n==2) return cnt++;
    for( m;m>=2;m--){
    for(int i=2;i<m;i++){
    if(m%i==0){
        i++;
    }
    else{ 
        cnt++;
    }
    }
    }
    return cnt++;

}


int main(){
    int n;
    cin>>n;
    cout<<isprime(n);
}
// prime number caluc