#include<iostream>
#include<conio.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
      int d;
    //   vector<int >v;
        int sum =0;
        // while(sum!=1){
            while(n){
                d = n%10;
                // cout<<" d is"<<d;
                n = n/10;
                int sq = d*d;
                sum = sq +sum;
                if(n==0) 
                {
        // cout<<" n is before update "<<n<<" ";
                n=sum;
                sum =0;
                // cout<<" n is after  "<<n<<" ";
                }
                // cout<<" n is outer the loop"<<n<<" ";
                if(sum ==1){
                    return true;
                }
                // cout<<sum;
            }
        //     d = sum%10;
        //     sum = sum/10;
        //     int sq = d*d;
        //     sum = sq +sum;
        //     if(sum==1)return true;
        // }
        return false;
    }
};
int main(){
    int num;
    Solution A;
    cout<<"Enter a number :"<<endl;
    cin>>num;
    if(A.isHappy(num))cout<<"True "<<endl;
    else
    cout<<"False "<<endl;
}