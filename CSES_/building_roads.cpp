#include<bits/stdc++.h>
#include<iostream>
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
int main()
{
    fastIO;
    int a, b;
    memset(vis, 0, sizeof(vis));
    vector<int> ans;
    cin >> n >> m;
    for (int i = 0; i < m;i++){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int cc = 0;
    for (int i = 1; i <= n;i++){
        if(vis[i]==0){
            dfs(i);
            ans.push_back(i);
            cc++;
        }
    }
    cout << (cc - 1) << "\n";
    int u = ans[0], v = 0;
    for (int i = 1; i < cc;i++){
        v = ans[i];
        cout << u << " " << v << endl;
    }
    return 0;
}
