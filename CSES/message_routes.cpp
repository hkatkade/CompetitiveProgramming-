#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> vis(100001, 0);
vector<int> adj[100001];
vector<int> pairs((2 * 100000) + 1, -1);
void bfs(int node)
{
    queue<int> q;
    vis[node] = 1;
    q.push(node);
    while(!q.empty()){
        node = q.front();
        q.pop();
        for(auto &i:adj[node]){
            if(vis[i]==0){
                vis[i] = 1;
                pairs[i] = node;
                q.push(i);
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
    bfs(1);
    if(pairs[n]==-1){
        cout << "IMPOSSIBLE\n";
    }
    else{
        vector<int> ans;
        int curr = n;
        while(curr!=-1){
            ans.push_back(curr);
            curr = pairs[curr];
        }
        cout << ans.size() << "\n";
        for (int i = ans.size() - 1; i >= 0;i--){
            cout << ans[i] << " ";
        }
    }   
    return 0;
}