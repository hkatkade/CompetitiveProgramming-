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
        ll n;
        cin >> n;
        vector<ll> a(n, 0), b(n-1, 0);
        unordered_map<ll, ll> m;
        for (ll i = 0; i < n;i++){
            cin >> a[i];
        }
        for (ll i = 0; i < n-1;i++){
            cin >> b[i];
        }
        sort(a);
        sort(b);
        for (ll i = 0; i < n-1;i++){
            ll d1 = b[i] - a[i];
            ll d2 = b[i] - a[i + 1];
            if(d1!=d2){
                if(d1>0)
                    m[d1]++;
                if(d2>0)
                    m[d2]++;
            }
            else{
                if(d1>0)
                    m[d1]++;
            }
        }
        for(auto &i:m){
            if(i.second==n-1){
                cout << i.first << "\n";
                break;
            }
        }
    }
    return 0;
}
