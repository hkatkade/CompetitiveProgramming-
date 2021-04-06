#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> vis(100001, 0);
vector<int> adj[100001];
vector<int> col(100001, 0);
void dfs(int node,int colour){
    vis[node] = 1;
    col[node] = colour;
    for(auto &child:adj[node]){
        if(col[node]==col[child]){
                cout << "IMPOSSIBLE\n";
                exit(0);
                
            }
        else if(vis[child]==0){
            if(colour==1){
                dfs(child, 2);
            }
            else if(colour==2){
                dfs(child, 1);
            }
        }
    }
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
            dfs(i, 1);
        }
    }
    for (int i = 1; i <= n;i++){
        cout << col[i] << " ";
    }
    return 0;
}