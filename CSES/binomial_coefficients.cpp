#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define w(t) ll t;cin>>t;while(t--)
using namespace std;
vector<ll> fact(1000001, 0);
int main()
{
    w(t){
        ll a,b;
        cin >> a >> b;
        if(a==b){
            cout << 1 << "\n";
            continue;
        }
        fact[0] = 1;
        for (int i = 1; i <= b;i++){
            fact[i] = ((fact[i - 1]%MOD) * (i%MOD)) % MOD;
        }
        ll ans = (fact[a] / (fact[b] * (fact[a] - fact[b]))) % MOD;
        cout << ans << "\n";
    }
    return 0;
}