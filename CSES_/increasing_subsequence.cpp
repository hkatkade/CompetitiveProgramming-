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
    ll n;
    cin >> n;
    vector<ll> a(n, 0);
    vector<ll> dp(n, 1);
    for (ll i = 0; i < n;i++){
        cin >> a[i];
    }
    ll ans = -1;
    for (ll i = 1; i < n;i++){
        for (ll j = 0; j < i;j++){
            if(a[j]<a[i] && dp[i]<dp[j]+1){
                dp[i] = dp[j] + 1;
            }
            ans = max(ans, dp[i]);
        }
    }
    cout << ans;
    return 0;
}