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
    w(t){
        ll n, k;
        string s;
        bool ok = true;
        cin >> n >> k >> s;
        if(2*k>=n){
            cout << "NO\n";
            continue;
        }
        for (ll i = 0; i < n && k>0;i++,k--){
            if(s[i]!=s[n-i-1]){
                ok = false;
            }
        }
        cout << (ok ? "YES" : "NO")<<"\n";
    }
    return 0;
}
