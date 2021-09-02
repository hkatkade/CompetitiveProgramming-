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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n, 0);
        ll maxi = INT_MIN;
        for(auto &i:a){
            cin >> i;
            maxi = max(maxi, i);
        }
        ll ans = 0;
        for (ll i = k - 1; i < n;i++){
            if(a[i]==maxi){
                ans += (n - i);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
