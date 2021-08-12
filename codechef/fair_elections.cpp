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
        ll n, m, john = 0, jack = 0;
        cin >> n >> m;
        vector<int> a(n, 0), b(m, 0);
        for (ll i = 0; i < n;i++){
            cin >> a[i];
            john += a[i];
        }
        for (ll i = 0; i < m;i++){
            cin >> b[i];
            jack += b[i];
        }
        sort(a);
        sort(b);
        ll ans = 0;
        bool ok = false;
        for (ll i = m - 1,j=0; i >= 0 && j<n;i--,j++){
            if(john>jack){
                ok = true;
                break;
            }
            john -= a[j];
            john += b[i];
            jack -= b[i];
            jack += a[j];
            ans++;
            // cout << john << " " << jack << endl;
        }
        if(ok)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
