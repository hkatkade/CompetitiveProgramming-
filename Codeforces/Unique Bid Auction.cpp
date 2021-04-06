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
    w(t){
        ll n,x;
        cin >> n;
        set<pair<ll,ll>> s;
        vector<ll> a(n, 0);
        unordered_map<ll, ll> m;
        for (ll i = 0; i < n;i++){
            cin >> x;
            s.insert(make_pair(x,i+1));
            m[x]++;
        }
        bool ok = false;
        for(auto &i:s){
            if(m[i.first]==1){
                ok = true;
                cout << i.second << "\n";
                break;
            }
        }
        if(!ok){
            cout << -1 << "\n";
        }
    }
    return 0;
}