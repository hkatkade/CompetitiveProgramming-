#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
using namespace std;
ll dp[M];
int main()
{
    fastIO;
    ll n;
    cin>>n;
    dp[0] = 1;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j<=6 && j <= i;j++){
            dp[i] = (dp[i]%MOD + (dp[i - j]) % MOD)%MOD;
        }
    }
    cout << dp[n];
    return 0;
}