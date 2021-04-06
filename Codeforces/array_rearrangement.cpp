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
    w(t){
        ll n, x;
        bool ok = true;
        cin >> n >> x;
        vector<ll> a(n, 0);
        vector<ll> b(n, 0);
        for(auto &i:a)
            cin >> i;
        for(auto &i:b)
            cin >> i;
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        for (ll i = 0; i < n;i++){
            if((a[i]+b[i])>x){
                ok = false;
                break;
            }
        }
        cout << (ok ? "Yes" : "No") << "\n";
    }
    return 0;
}