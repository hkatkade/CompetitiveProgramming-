    #include<bits/stdc++.h>
    #define ll long long int
    #define MOD 1000000007
    #define M 1000001
    #define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
    #define w(t) ll t;cin>>t;while(t--)
    #define sort(a) sort(a.begin(), a.end());
    using namespace std;
    vector<ll> adj[M];
    ll vis[M];
    ll n, m, road, lib, u, v, nodes=0;
    void dfs(ll node){
        nodes++;
        vis[node] = 1;
        for(auto &child:adj[node]){
            if(vis[child]==0){
                dfs(child);
            }
        }
    }
    int main()
    {
        fastIO;
        w(t){
            memset(vis,0,sizeof(vis));
            ll cc = 0;
            cin >> n >> m >> lib >> road;
            for (ll i = 0; i < m;i++){
                cin >> u >> v;
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
            if(lib<=road){
                cout << n * lib << "\n";
                for (ll i = 0; i <= n;i++){
                    adj[i].clear();
                }
                memset(vis,0,sizeof(vis));
                continue;
            }
            ll f_nodes = 0;
            for (ll i = 1; i <= n;i++){
                if(vis[i]==0){
                    nodes = 0;
                    dfs(i);
                    cc++;
                    f_nodes += nodes-1;
                }
            }
            cout << (road*(f_nodes) + (cc * lib)) << "\n";
            for (ll i = 0; i <= n;i++){
                adj[i].clear();
            }
        }
        return 0;
    }