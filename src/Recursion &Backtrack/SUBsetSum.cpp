#include <bits/stdc++.h>
using namespace std;

//---------------------------------------------------Dp--------------------------------------------

// -----------------------------Reccurence relation-

// bool subsetsum(int t,int n,vector<int>&arr){
// if(t==0)return true;
// if(n==0) return t==arr[0];

// // exclude,not take just move to next index without including the target
//  bool not_part=subsetsum(t,n-1,arr);
// //  include,take part move to next index with the including the sum to get  target

// bool be_part=false;
// if(t>=arr[n])
// be_part=subsetsum(t-arr[n],n-1,arr);

// return (not_part|be_part);

// }

// int main(){
//     vector<int>arr={ 2,3,1,1 };
//     int t=4,n=arr.size();
//     bool ans=subsetsum(t,n-1,arr);
//     cout<<"ans"<<ans<<endl;
// }

// -----------------------------    Reccurence relation     +    Memorization

// bool subsetsum(int t,int n,vector<int>&arr,vector<vector<int>>&dp){

// if(t==0)return true;
// if(n==0) return t==arr[0];
// if(dp[n][t]!=-1)return dp[n][t];

// // exclude,not take just move to next index without including the target
//  bool not_part=subsetsum(t,n-1,arr,dp);
// //  include,take part move to next index with the including the sum to get  target

// bool be_part=false;
// if(t>=arr[n])
// be_part=subsetsum(t-arr[n],n-1,arr,dp);

// return dp[n][t]=(not_part|be_part);

// }

// int main(){

//     vector<int>arr={ 2,3,1,1 };
//     int t=4,n=arr.size();
//     vector<vector<int>>dp(1000,vector<int>(n,-1));
//     bool ans=subsetsum(t,n-1,arr,dp);
//     cout<<"ans"<<ans<<endl;
// }

// -----------------------------   Tabulation

bool subsetsum(int t, int n, vector<int> &arr, vector<vector<int>> &dp)
{

    if (t == 0)
        return true;
    if (n == 0)
        return t == arr[0];
    if (dp[n][t] != -1)
        return dp[n][t];

    // exclude,not take just move to next index without including the target
    bool not_part = subsetsum(t, n - 1, arr, dp);
    //  include,take part move to next index with the including the sum to get  target

    bool be_part = false;
    if (t >= arr[n])
        be_part = subsetsum(t - arr[n], n - 1, arr, dp);

    return dp[n][t] = (not_part | be_part);
}

int main()
{

    vector<int> arr = {2, 3, 1, 1};
    int t = 4, n = arr.size();
    vector<vector<int>> dp(1000, vector<int>(n, -1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= t; j++)
        {
            dp[i][0] = arr[0];
            dp[0][arr[0]] = true;
            bool not_part = dp[i - 1][t];
            bool be_part = dp[i - 1][t - arr[i]];
            dp[i][t] = (not_part | be_part);
        }
    }
}
