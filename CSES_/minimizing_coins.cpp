#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
ll seive(ll n){
    set<ll> s;
    bool a[n + 1];
    memset(a, true, sizeof(a));
    a[0] = false;
    a[1] = false;
    for (ll i = 2; i * i <= n;i++){
        if(a[i]==true){
            for (ll j = i * i; j <= n;j+=i){
                a[j] = false;
            }
        }
    }
    for (ll i = 0; i <= n;i++){
        if(a[i]==true){
            s.insert(i);
        }
    }
    return s.size();
}
int main()
{
    fastIO;
    ll n, x;
    vector<ll> dp(M, 1e9);
    cin >> n >> x;
    dp[0] = 0;
    vector<ll> coins(n, 0);
    for(auto &i:coins){
        cin >> i;
    }
    for (ll i = 1; i <= x;i++){
        for (ll j = 0; j < n;j++){
            if((i-coins[j])>=0){
                dp[i] = min(dp[i], dp[i - coins[j]]+1);
            }
        }
    }
    if(dp[x]==1e9){
        cout << -1;
    }
    else{
        cout << dp[x];
    }
    return 0;
}