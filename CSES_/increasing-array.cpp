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
int main()
{
    fastIO;
    ll ans = 0, n;
    cin >> n;
    vector<ll> a(n, 0);
    for (int i = 0; i < n;i++)
        cin >> a[i];
    for (int i = 0; i < n-1;i++){
        if(a[i]>a[i+1]){
            ans += abs(a[i] - a[i + 1]);
            a[i + 1] = a[i];
        }
    }
    cout << ans;
    return 0;
}
