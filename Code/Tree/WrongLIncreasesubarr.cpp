class Solution {
public:
    int maxNonDecreasingLength(vector<int>& n1, vector<int>& n2) {
        int n=n1.size(),cnt=0,prev=0,maxi=-1;
        for(int i=0;i<n;i++){
        if(n1[i]<=n2[i]){
            if(prev<=n1[i]){
            prev=n1[i];
            cnt++;
            }
            else if(prev<=n2[i]){
                   prev=n2[i];   
                cnt++;
            }
            else if(n1[i]=n2[i]){
                cnt++;
                prev=n1[i];}
         
            maxi=max(maxi,cnt);
            
        }
            else if(n2[i]>=prev){
                prev=n2[i];
                cnt++;
                maxi=max(maxi,cnt);
            }
            else if(n1[i]>=prev){
                 prev=n1[i];
                 cnt++;
                maxi=max(maxi,cnt);
            }
        }
        return maxi;
    }
};