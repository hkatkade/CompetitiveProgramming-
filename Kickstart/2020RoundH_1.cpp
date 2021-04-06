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
    int x = 1, t;
    cin >> t;
    for (int x = 1; x <= t;x++){
        ll n, s, k, ans;
        cin >> n >> k >> s;
        ll t1 = abs(k - s) + (n - s + 1) + (k - 1);
        ll t2 = (k - 1) + 1 + n;
        cout << "Case #" << x << ": " << min(t1, t2) << "\n";
    }
    return 0;
}