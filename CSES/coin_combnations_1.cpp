#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
using namespace std;
int main()
{
    fastIO;
    ll n, value;
    cin >> n >> value;
    vector<ll> coins(n+1, 0);
    vector<vector<int>> dp( n+1 , vector<int> (value+1, 0));
    for (ll i = 1; i <= n;i++)
    {
        cin >> coins[i];
    }
    for (ll i = 1; i <= n;i++){
        for (ll i = 0; j <= n;i++){
            
        }
    }
    for (int i = 1; i <= n;i++){
        for (int j = 0; j <= value;j++){
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }
    cout << dp[n][value];
    return 0;
}