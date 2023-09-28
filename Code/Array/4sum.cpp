#include<bits/stdc++.h>
#define ll long long 
// better solution
// T -O(n^3 *log(m))
vector<vector<int>> fourSum(vector<int>& nums, int target) {

set<vector<int>>unique;
 int n =nums.size();
 for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
         set<ll>s;
         for(int k=j+1;k<n;k++){
             ll sum =nums[i]+nums[j];
             sum+=nums[k];
             ll fourth=target-sum;
             if(s.find(target-sum)!=s.end()){
                 vector<int>temp={nums[i],nums[j],nums[k],(int)fourth};
                 sort(temp.begin(),temp.end());
                 unique.insert(temp);
             }
             s.insert(nums[k]);
         }
     }
 }
 vector<vector<int>>ans(unique.begin(),unique.end());
 return ans;

}