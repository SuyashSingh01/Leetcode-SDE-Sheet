#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// -------------------------------bfs traversal-------------------

class solution{
    
public:
vector<int>bfsTraversal(int n,vector<int>adj[]){
    int vis[n]={0};
    vis[0]=1;
    vector<int>ans;
    queue<int>q;
    q.push(0);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for(auto it:adj[node]){
        if(!vis[it]){
            vis[it]=1;
            q.push(it);
        }
        }
    }
    return ans;
}

};

void printAns(vector <int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

void addEdge(vector<int>adj[],int u,int v ){
 adj[u].push_back(v);
 adj[v].push_back(u);
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>adj[n];
    // for(int i=0;i<m;i++){
    //     cin>>u>>v;
    //     adj[u].push_back(v);
    //     adj[v].push_back(u);        //for only undirected graph
    // } 
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 0, 4);

    solution obj;
    vector<int>answer=obj.bfsTraversal(n,adj);
    printAns(answer);
    // if the weighted graph are given then how we store the edge weight in adjaceny list

    // vector<pair<int,int>>adjWeigh(n);
    // for(int i=0;i<m;i++){
    // cin>>u>>v>>w;          
    // adjWeigh[u].push_back({v,w});
    // }
}