#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;
// Tabulation
class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {   vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=n-1;i>=0;i--)
            for(int j=m-1;j>=0;j--)
                if(s1[i]==s2[j])dp[i][j]=1+dp[i+1][j+1];
                 else dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
      return dp[0][0];
    }
};
// REcursion+ MEmoization
// class Solution
// {
//     int f(int n, int m, string s1, string s2,vector<vector<int>>&dp){
//         if(n==s1.size())return 0;
//         if(m==s2.size())return 0;
//         if(dp[n][m]!=-1)return dp[n][m];
//         int ans=0;
//         if(s1[n]==s2[m])return ans=1+f(n+1,m+1,s1,s2,dp);
//         else ans=max(f(n+1,m,s1,s2,dp),f(n,m+1,s1,s2,dp));
//             dp[n][m]=ans;
//     }
//     public:
//     //Function to find the length of longest common subsequence in two strings.
//     int lcs(int n, int m, string s1, string s2)
//     {   vector<vector<int>>dp(n,vector<int>(m,-1));
//         return f(0,0,s1,s2,dp);
//     }
// };

// REcursion
// class Solution
// {
//     int f(int n, int m, string s1, string s2){
//         if(n==s1.size())return 0;
//         if(m==s2.size())return 0;
            // int ans=0;
//         if(s1[n]==s2[m])return 1+f(n+1,m+1,s1,s2);
//         else ans=max(f(n+1,m,s1,s2),f(n,m+1,s1,s2));
            // return ans;
//     }
//     public:
//     //Function to find the length of longest common subsequence in two strings.
//     int lcs(int n, int m, string s1, string s2)
//     {
//         return f(0,0,s1,s2);
//     }
// };


int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

