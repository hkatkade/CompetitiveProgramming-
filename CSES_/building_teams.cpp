#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 100001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
int n, m;
vector<int> g[M];
int vis[M];
vector<int> par(2 * M, -1);
vector<int> ans(2 * M, 0);
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
void dfs(int x){
    vis[x] = 1;
    for(auto &i:g[x]){
        if(vis[i]==0){
            dfs(i);
        }
    }
}
void bfs(int x,int colour){
    vis[x] = 1;
    ans[x] = colour;
    queue<int> q;
    q.push(x);
    while(!q.empty()){
        int next = q.front();
        q.pop();
        for(auto &i:g[x]){
            vis[i] = 1;
            
            q.push(i);
        }
    }
}
int main()
{
    fastIO;
    int a, b;
    memset(vis, 0, sizeof(vis));
    cin >> n >> m;
    for (int i = 0; i < m;i++){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for (int i = 1; i <= n;i++){
        if(vis[i]==0){
            bfs(i,1);
        }
    }
    return 0;
}
