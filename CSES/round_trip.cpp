#include<bits/stdc++.h>
using namespace std;
int n, m, par=0, child;
vector<int> vis(100001, 0);
vector<int> adj[100001];
vector<int> parent(100001, 0);
bool dfs(int node,int par){
    vis[node] = 1;
    parent[node] = par;
    for(auto &ch:adj[node]){
        if(node==par){
            continue;
        } 
        if(vis[child]==0){
            if(dfs(ch, node))
                return true;
        }
        else{
            par = node;
            child = ch;
            return true;
        }
    }
    return false;
}
int main()
{
    int a, b;
    cin >> n >> m;
    for (int i = 0; i < m;i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i <= n;i++){
        if(vis[i]==0){
            dfs(i, par);
        }
    }
    int x = par;
    vector<int> ans;
    ans.push_back(par);
    while(x!=child){
        ans.push_back(parent[x]);
        x = parent[x];
    }
    ans.push_back(par);
    cout << ans.size() << "\n";
    for(auto &i:ans){
        cout << ans[i] << " ";
    }
    return 0;
}