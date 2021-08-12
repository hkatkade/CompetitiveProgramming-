#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 100001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
int main()
{
    fastIO;
    w(t){
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n+1, 0);
        vector<vector<ll>> dp(2, vector<ll>(n + 1, 0));
        for (ll i = 1; i <= n;i++){
            cin >> a[i];
        }
        for (ll i = 1; i <= n;i++){
            if(a[i]%2){
                dp[1][i] = dp[1][i - 1]+1;
                dp[0][i] = dp[0][i - 1];
            }
            else{
                dp[0][i] = dp[0][i - 1]+1;
                dp[1][i] = dp[1][i - 1];
            }
        }
        // cout<<"--------------------------\n";
        // for(int i=0;i<2;i++){
        //     for(int j=0;j<=n;j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        for (ll x = 0; x < q;x++){
            ll l, r;
            cin >> l >> r;
            ll e = dp[0][r] - dp[0][l-1];
            ll o = dp[1][r] - dp[1][l-1];
            // cout<<e<<" "<<o<<endl;
            ll ans = (e * (e - 2) * (e - 1) / 6) + (o * (o - 1) / 2) * e;
            cout << ans <<"\n";
        }
    }
    return 0;
}
