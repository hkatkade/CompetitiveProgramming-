#include<bits/stdc++.h>
using namespace std;

void dfs(int node,int parent,vector<int> &vis,vector<int> &tin,vector<int> &low,int timer,vector<int> g[]){
    vis[node] = 1;
    tin[node] = low[node] = timer++;
    for(auto &i:g[node]){
        if(i==parent){
            continue;
        }
        if(vis[i]==0){
            dfs(i, node, vis, tin, low, timer, g);
            low[node] = min(low[node], low[i]);
            if(low[i]>tin[node]){
                cout << node << " " << i << endl;
            }
        }
        else{
            low[node] = min(low[node], tin[i]);
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> g[n];
    for (int i = 0; i < m;i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> tin(n, -1), low(n, -1), vis(n, 0);
    int timer = 0;
    for (int i = 0; i < n;i++){
        if(vis[i]==0){
            dfs(i, -1, vis, tin, low, timer, g);
        }
    }
    return 0;
}