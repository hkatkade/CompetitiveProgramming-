#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 100001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
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
ll power(ll x,ll y){
    ll res = 1;
    x = x % MOD;
    if(x==0){
        return 0;
    }
    while(y>0){
        if(y%2==1){
            res = (res * x) % MOD;
        }
        y /= 2;
        x = (x * x) % MOD;
    }
    return res;
}
int main()
{
    fastIO;
    ll n;
    string a, b;
    cin >> n >> a >> b;
    ll j = 0, ans = 0;
    for (ll i = 0; i < n;i++){
        if(a[i]!=b[i]){
            j = i + 1;
            while(a[j]!=b[j]){
                j++;
            }
            ans++;
            i = j;
        }
    }
    cout << ans;
    return 0;
}

