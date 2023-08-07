#include <bits/stdc++.h>
using namespace std;
// Author: SUYASH SINGH
// ----------------------------------------------Target-sum-combination------------------------------------

void combinationsum(int i, int n, vector<int> &ds,int arr[], vector<vector<int>> &ans, int target)
{
    if (i == n)
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return ;
    }
    if(target>=arr[i]){
        ds.push_back(arr[i]);
        combinationsum(i,n,ds,arr,ans,target-arr[i]);
        ds.pop_back();
    }
        combinationsum(i+1,n,ds,arr,ans,target);

}

int main()
{
    int arr[] = {2, 3, 5, 7, 4,1};
    vector<int>  ds;
    vector<vector<int>>ans;
    
    combinationsum(0, 6, ds,arr, ans, 7);
    for (auto i : ans){
        for(auto j:i){
        cout << j << " ";
        }
        cout<<endl;
    }

        return 0;
}

// O/P
// 2 2 3 
// 2 5
// 3 4
// 7