// //{ Driver Code Starts
// //Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// /*You are required to complete this function*/

// class Solution{
//     public:
//     int maxLen(vector<int>&a, int n)
//     {   vector<int>ans;
//         int i=0,j=n, maxi=0;
        
//         // sort(a.begin(),a.end());
//         for(int i=0;i<n;i++){
//             int sum=0;
//             for(int j=i;j<n;j++)
//             sum+=a[j];
//             if(sum==0){
//                 // cout<<"j"<<j<<endl;
//             ans.push_back(j-i+1);
//             }
//         }
//         for(auto it:ans){
//             cout<<it<<" ";
//             maxi=max(maxi,it);
            
//         }
//         return maxi;
//     }
// };


//{ Driver Code Starts.

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int m;
//         cin>>m;
//         vector<int> array1(m);
//         for (int i = 0; i < m; ++i){
//             cin>>array1[i];
//         }
//         Solution ob;
//         cout<<ob.maxLen(array1,m)<<endl;
//     }
//     return 0; 
// }



// // } Driver Code Ends

#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    int maxLen(vector<int>& a, int n) {
        int maxi = 0;

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += a[j];
                if (sum == 0) {
                    maxi = max(maxi, j - i + 1);
                }
            }
        }
        return maxi;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i) {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}
