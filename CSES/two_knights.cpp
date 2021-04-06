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
    ll n;
    cin >> n;
    for (ll i = 1; i <= n;i++){
        ll ans = (i * i * (i * i - 1))/2 - (4 * (i - 1)*(i - 2));
        cout << ans << "\n";
    }
        return 0;
}