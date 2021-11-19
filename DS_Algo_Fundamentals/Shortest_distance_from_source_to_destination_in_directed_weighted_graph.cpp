#include<bits/stdc++.h>
using namespace std;
void topologicalsort(int node,vector<int>& vis,stack<int> &st,vector<pair<int,int>> g[]){
    vis[node] = 1;
    for(auto &i:g[node]){
        if(vis[i.first]==0){
            topologicalsort(i.first,vis,st,g);
        }
    }
    st.push(node);
}
void shortestPath(vector<pair<int,int>> g[],int n,int src){
    vector<int> vis(n, 0);
    stack<int> st;
    for (int i = 0; i < n;i++){
        if(vis[i]==0){
            topologicalsort(i, vis, st, g);
        }
    }
    vector<int> dist(n, 0);
    for (int i = 0; i < n;i++){
        dist[i] = INT_MAX;
    }
    dist[src] = 0;
    while(!st.empty()){
        int node=st.top();
        st.pop();
        // if that node has been visited before, vice versa
        if(dist[node]!=INT_MAX){
            for(auto &i:g[node]){
                if(dist[node]+i.second < dist[i.first]){
                    dist[i.first] = dist[node] + i.second;
                }
            }
        }
    }
    for (int i = 0; i < n;i++){
        cout << dist[i] << " ";
    }
}
int main(){
    int n, m, src;
    cin >> n >> m >> src;
    vector<pair<int, int>> g[n];
    for (int i = 0; i < m;i++){
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back(make_pair(v, w));
    }
    // 1. Find topological sort, for calling BFS
    /*
    lets say you want to do it using DFS
    yes you can do it using DFS , but consider the case when you already updated a node's distance by a
    dfs() call and lets say its 7 and as it is DFS then its obvious that you also have updated all the
    nodes in its segment of DFS call . now you have reached to the same node from different dfs() call
    and now the distance is 4 , so in order to update all the nodes which were affected by the DFS call
    previously on the node considering distance as 7 , you now again have to do the same so that its
    updated with new min distance. Same is the scenario for the simple BFS approach.
    This multiple time calling DFS/BFS degrades the Time Complexity, hence Topological Ordering
    save you from that overhead as you already know which nodes will come after the current node,
    so you keep on updating it .
    */
    shortestPath(g, n, src);
    return 0;
}