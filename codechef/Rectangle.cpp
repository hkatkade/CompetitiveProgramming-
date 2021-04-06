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
        ll ones=0, m, n;
        cin >> n >> m;
        vector<string> a;
        string s;
        for (ll i = 0; i < n;i++){
            cin >> s;
            a.push_back(s);
        }
        ll maxI = 0, minI = INT_MAX, maxY = 0, minY = INT_MAX;
        for (ll i = 0; i < n;i++){
            for (ll j = 0; j < m;j++){
                if(a[i][j]=='1'){
                    maxI = max(maxI, i);
                    maxY = max(maxY, j);
                    minI = min(minI, j);
                    minY = min(minY, j);
                    ones++;
                }
            }
        }
        cout << ((((maxI - minI + 1) * (maxY - minY + 1)) == ones) ? "YES\n" : "NO\n");
    }
    return 0;
}