#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int> g[],int n,int src){
    vector<int> dist(n, 0);
    for (int i = 0; i < n;i++){
        dist[i] = INT_MAX;
    }
    queue<int> q;
    q.push(src);
    dist[src] = 0;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto &i:g[node]){
            if(dist[node]+1<dist[i]){
                dist[i] = dist[node] + 1;
                q.push(i);
            }
        }
    }
    for (int i = 0; i < dist.size();i++){
        cout << dist[i] << " ";
    }
}
int main(){
    int n, m, src;
    cin >> n >> m >> src;
    vector<int> g[n];
    for (int i = 0; i < m;i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bfs(g, n, src);
    return 0;
}