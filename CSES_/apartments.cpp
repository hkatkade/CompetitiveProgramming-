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
    ll m, n, k;
    cin >> n >> m >> k;
    vector<int> cus(n, 0);
    vector<int> ap(m, 0);
    for (int i = 0; i < n;i++){
        cin >> cus[i];
    }
    for (int i = 0; i < m;i++){
        cin >> ap[i];
    }
    sort(ap);
    sort(cus);
    ll i = 0, j = 0, ans=0;
    while(i<n && j<m){
        if(abs(cus[i]-ap[j])<=k){
            i++;
            j++;
            ans++;
        }
        else if(ap[j]>cus[i]){
            i++;
        }
        else{
            j++;
        }
    }
    cout << ans;
    return 0;
}
