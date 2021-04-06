#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
int main()
{
    fastIO;
    ll n, k,temp=1;
    cin >> n >> k;
    vector<ll> f(k + 1, 0);
    vector<ll> a(n, 0);
    for(auto &i:a){
        cin >> i;
        f[i % k]++;
    }
    ll ans = min(f[0],temp);
    for (ll i = 1; i <= (k/2);i++){
        if(i!=k-i)
            ans += max(f[i], f[k - i]);
        else
            ans+=min(f[i],temp);
    }
    cout << ans << "\n";
    return 0;
}