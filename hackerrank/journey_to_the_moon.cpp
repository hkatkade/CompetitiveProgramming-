#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
vector<ll> adj[M];
ll vis[M],nodes=0;
ll dfs(ll node){
    nodes++;
    vis[node] = 1;
    for(auto &child:adj[node]){
        if(vis[child]==0){
            dfs(child);
        }
    }
    return nodes;
}
int main()
{
    fastIO;
    ll n, p, u, v, ans=1;
    cin >> n >> p;
    for (ll i = 0; i < p;i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (ll i = 0; i <= n;i++){
        if(vis[i]==0){
            nodes = 0;
            ans*=dfs(i);
            //ans *= nodes;
        }
    }
    cout << ans;
    return 0;
}

    