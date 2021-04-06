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
        ll n, k, mex = -1, maxi = INT_MIN;
        cin >> n >> k;
        vector<ll> a(n, 0);
        set<ll> s;
        for (ll i = 0; i < n;i++){
            cin >> a[i];
            s.insert(a[i]);
            maxi = max(maxi, a[i]);
        }
        if(k==0){
            cout << s.size() << "\n";
            continue;
        }
        sort(a);
        for (ll i = 0; i < n;i++){
            if(a[i]!=i){
                mex = i;
                s.insert(ceil(float(mex + maxi)/2));
                break;
            }
        }
        if(mex==0){
            cout << s.size() << "\n";
            continue;
        }
        if(mex==-1){
            cout << s.size() + k << "\n";
            continue;
        }
        cout << s.size() << "\n";
    }
    return 0;
}