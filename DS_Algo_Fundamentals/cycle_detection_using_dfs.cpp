#include<bits/stdc++.h>
using namespace std;
bool isCycle(vector<vector<int>>& g,vector<int> vis,int node,int par){
    vis[node] = 1;
    for(auto &i:g[node]){
        if(i!=par){
            if(vis[i]==1){
                return true;
            }
            if(vis[i]==0 && isCycle(g,vis,i,node)){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for (int i = 0; i < m;i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> vis(n, 0);
    bool cycle = false;
    for (int i = 0; i < n;i++){
        if(vis[i]==0 && isCycle(g,vis,i,-1)){
            cycle = true;
        } 
    }
    if(cycle){
        cout << "Cycle is present\n";
    }
    else{
        cout << "Cycle is not present\n";
    }
    return 0;
}