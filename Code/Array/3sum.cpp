// better solution 
// T-O(n^2 * log(m))
// #include<bits/stdc++.h>
// #define ll long long 
// vector<vector<int>> triplet(int n, vector<int> & nums)
// {
// set<vector<int>>unique;
//  for(int i=0;i<n;i++){
//          set<ll>s;
//          for(int k=i+1;k<n;k++){
//              ll sum =nums[i]+nums[k];
//              ll third=-sum;
//              if(s.find(-sum)!=s.end()){
//                  vector<int>temp={nums[i],nums[k],(int)third};
//                  sort(temp.begin(),temp.end());
//                  unique.insert(temp);
//              }
//              s.insert(nums[k]);
//          }
//      }
//  vector<vector<int>>ans(unique.begin(),unique.end());
//  return ans;
// }

#include<bits/stdc++.h>
#define ll long long 
 vector<vector<int>> triplet(int n, vector<int> & nums){
set<vector<int>>unique;
sort(nums.begin(),nums.end());
 for(int i=0;i<n;i++){
       if(i>0&&nums[i]==nums[i-1])continue;
	   ll sum=0;
	   int j=i+1;
	   int k=n-1;
       
	    while(j<k){
			int third=nums[i]+(nums[j]+nums[k]);
			if(third<0){
				j++;
			}
			else if(third>0){
				k--;
			}
			else {
                          vector<int> temp = {nums[i], nums[j], nums[k]};
                          unique.insert(temp);
                          j++;
                          k--;
                          while (j < k && nums[j] == nums[j - 1])
                            j++;
                          while (j < k && nums[k] == nums[k + 1])
                            k--;
                        }
            }
     }
 vector<vector<int>>ans(unique.begin(),unique.end());
 return ans;
}
// optimal
// T- O(n^2)