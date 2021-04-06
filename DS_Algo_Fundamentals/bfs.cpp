#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[100001];
vector<int> vis(100001,0);
void bfs(int node)
{
    queue<int> q;
    vis[node] = 1;
    q.push(node);
    while(!q.empty()){
        node = q.front();
        q.pop();
        cout << node << " ";
        /*for (int i = 0; i < adj[node].size();i++){
            if(vis[adj[node][i]]==0){
                vis[adj[node][i]] == 1;
                q.push(adj[node][i]);
            }
        }*/
        for(auto &i:adj[node]){
            if(vis[i]==0){
                vis[i] = 1;
                q.push(i);
            }
        }
    }
}
int main()
{
    int a,b;
    cin >> n >> m;
    for (int i = 0; i < m;i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(2);
    return 0;
}
