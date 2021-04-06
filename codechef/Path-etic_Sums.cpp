#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
vector<ll> adj[201];
vector<ll> vis(201, 0);
vector<ll> ans(201, 0);
void dfs(ll node,ll dist){
    vis[node] = 1;
    if(dist%2){
        ans[node] = 2;
    }
    else{
        ans[node] = 1;
    }
    for(auto &child:adj[node]){
        if(vis[child]==0){
            dfs(child,dist+1);
        }
    }
}
int main()
{
    fastIO;
    w(t){
        ll n,u,v;
        cin >> n;
        for (ll i = 0; i < n;i++){
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1,1);
        for (ll i = 1; i <= n;i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        for (ll i = 0; i <= n;i++){
            adj[i].clear();
        }
        vis.clear();
    }
    return 0;
}