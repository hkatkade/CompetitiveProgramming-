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
    ll n, r;
    cin >> n >> r;
    ll c[n], dp[n + 1][r + 1];
    memset(dp, 0, sizeof(dp));
    for (ll i = 0; i < n;i++){
        cin >> c[i];
    }
    dp[0][0] = 1;
    for (ll i = 1; i <= n;i++){
        for (ll j = 0; j <= r;j++){
            dp[i][j] = dp[i - 1][j];
            if((j-c[i-1])>=0){
                dp[i][j] = (dp[i][j] + dp[i][j-c[i-1]]) % MOD;
            }
        }
    }
    cout << dp[n][r];
    return 0;
}