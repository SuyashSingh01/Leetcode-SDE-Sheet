// #include"./thriver.h"
#include<bits/stdc++.h>
using namespace std;
void print( vector<vector<int>>&v){
    for(int f=0;f<v.size();f++){
    for (auto i = 0; i<v[0].size(); i++){
    cout<<v[f][i]<<" ";
    }
    cout<<"\n";
    }
}
int main(){
    pair<int,int>p;
    vector<vector<int>>v={{1,4,5},
                            {8,0,3},
                            {4,5,0}};
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            if(v[i][j]==0){
            
    for(int z=0;z<v[0].size();z++){
        v[i][z]=0;
        v[z][j]=0;
        // i++;
    }
            }
        }
    }
    // int i=0;
   
   print(v); 

}