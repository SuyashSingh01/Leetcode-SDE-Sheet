#include<bits/stdc++.h>
using namespace std;

// frog jump upto 2 step ,return min energy consumption

// class sol{
//     private:
//     int helper(vector<int>arr,int n){
        
//         if(n==0)return 0;
//         if(n<0) return 0;

//         int take_1step = abs(arr[n]-arr[n-1])+helper(arr,n-1);
//         int take_2step=INT_MAX;
//         if(n>1)
//          take_2step = abs(arr[n]-arr[n-2])+helper(arr,n-2);

//         return min(take_1step,take_2step);
//     }
//     public:
//     int frogjump(vector<int>arr){
//         int n=arr.size();
//         return helper(arr,n-1);
//     }
// };


// int main(){

//    sol obj ; 
//    vector<int>arr={5,7,1,5};
//    cout<<obj.frogjump(arr);
//  -------------------------------------------tabulation------------------------------------------------
//    //int n=arr.size();
//     //    vector<int>dp(n,0);
//     //    int k_steps=2;
//     //    dp[0]=0;
//     //    for(int i=1;i<n;i++){
//     //    int left=abs(dp[i]-dp[i-1])+dp[i-1];
//     //    int right=1e9;
//     //    if(i>1)
//      //   right=abs(dp[i]-dp[i-2])+dp[i-2];
    //
//     //    dp[i]=min(left,right);
//      //   }
// }

// ---------------------------------------frog jump K -steps- dp-memoriation-----------------------------------------

// class sol{
//     private:
//     int helper(vector<int>arr,int n,int ksteps,vector<int>&dp){
        
//         if(n==0)return 0;
//         if(n<0) return 0;
//         if(dp[n]!=0) return dp[n];
//             int  mini=1e9;
//         for(int f=1;f<=ksteps;f++){
//         if(n-f>=0){
//         int take_1step = abs(arr[n]-arr[n-f])+helper(arr,n-f,ksteps,dp);
//         // int take_2step = abs(arr[n]-arr[n-f])+helper(arr,n-f,ksteps,dp);
//         mini= min(take_1step,mini);
//         }
//         }
//          return dp[n]=mini;
//     }
//     public:
//     int frogjump(vector<int>arr){
//         int n=arr.size();
//         vector<int>dp(n,0);
//         int k_steps=2;
//         return helper(arr,n-1,k_steps,dp);
//     }
// };

// int main(){

//    sol obj ; 
//    vector<int>arr={2,4,9,6,2,9,2};
//    cout<<obj.frogjump(arr);
// }


// --------------------------------------------frog-jump-k-steps------Tabulation----------------------------------
class sol{
    // private:
    // int helper(vector<int>arr,int n,int ksteps,vector<int>&dp){
        
    //     if(n==0)return 0;
    //     if(n<0) return 0;
    //     if(dp[n]!=0) return dp[n];
    //         int  mini=1e9;
    //     for(int f=1;f<=ksteps;f++){
    //     if(n-f>=0){
    //     int take_1step = abs(arr[n]-arr[n-f])+helper(arr,n-f,ksteps,dp);
    //     // int take_2step = abs(arr[n]-arr[n-f])+helper(arr,n-f,ksteps,dp);
    //     mini= min(take_1step,mini);
    //     }
    //     }
    //      return dp[n]=mini;
    // }
    public:
    int frogjump(vector<int>arr){
        int n=arr.size();
        vector<int>dp(n,0);
        int k_steps=2;
        dp[0]=0;
        //---------------------------------------- tabulation-----------------------
        for(int i=1;i<n;i++){
            int mini=1e9;
            for(int k=1;k<=k_steps;k++){
                int steps=1e9;
                if(i-k>=0)
                steps=abs(arr[i]-arr[i-k])+dp[i-k];
                dp[i]=min(steps,mini);
            }
       
        return dp[n-1];
        }
    }
};

int main(){

   sol obj ; 
   vector<int>arr={2,4,9,6,/* The numbers `2, 9, 2` in the code are the elements of the input array
   `arr`. They represent the positions of the frog on a number line. The
   frog can jump from one position to another, and the goal is to find the
   minimum energy consumption required for the frog to reach the last
   position. */
   2,9,2};
   cout<<obj.frogjump(arr);
}