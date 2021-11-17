#include<bits/stdc++.h>
using namespace std;
void hk(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
}

void dfs(vector<int> g[],stack<int>& st,int node,vector<int>& vis){
    // cout << node << " ";
    vis[node]=1;
    for(auto &i:g[node]){
        if(vis[i]==0){
            dfs(g, st, i, vis);
        }
    }
    st.push(node);
}
void revDFS(vector<int> g_rev[],vector<int> &vis,int &node){
    cout << node << " ";
    vis[node] = 1;
    for(auto &i:g_rev[node]){
        if(vis[node]==0){
            revDFS(g_rev, vis, i);
        }
    }
}
int main(){
    hk();
    int n, m;
    cin >> n >> m;
    vector<int> g[n+1], g_rev[n+1];
    for (int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g_rev[v].push_back(u);
    }
    stack<int> st;
    vector<int> vis(n + 1, 0);
    for (int i = 0; i <= n;i++){
        if(vis[i]==0){
            dfs(g, st, i, vis);
        }
        // cout << endl;
    }
    fill(vis.begin(), vis.end(), 0);
    while(!st.empty()){
        int node=st.top();
        st.pop();
        if(vis[node]==0){
            cout<<"SCC: ";
            revDFS(g_rev, vis, node);
            cout << endl;
        }
    }
    return 0;
}
