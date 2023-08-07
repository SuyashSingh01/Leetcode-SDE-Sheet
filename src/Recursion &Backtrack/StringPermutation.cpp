
#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
   void per(int i,int n,string S,vector<string>&ans,string ds){
       
    if(i==n){
    ans.push_back(S);
    return ;        
    }
    if(i>n)return;
    for(int j=i;j<n;j++){
        swap(S[i],S[j]);
    //   ds.push_back(S[j]);                                // with ds we can als do that take as paramater
    //   mp[j]=1;                                           // with ds
    per(i+1,n,S,ans,ds);
    swap(S[i],S[j]);
    //   ds.pop_back();
    //   mp[j]=0;
    }
   }
    vector<string> permutation(string S)
    {
        vector<string>ans;
        string ds="";
        int n=S.size();
        per(0,n,S,ans,ds);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
