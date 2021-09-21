#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
vector<ll> readV(){
    ll n;
    cin >> n;
    vector<ll> a(n, 0);
    for (auto &i:a)
        cin >> i;
    return a;
}
int main()
{
    fastIO;
    w(t){
        ll n, x,max_freq = 0;
        cin >> n >> x;
        vector<ll> a(n, 0);
       // = readV();
        for(auto &i:a){
            cin >> i;
        }
        unordered_map<ll, ll> m;
        for(auto &i:a){
            m[i]++;
            max_freq = max(max_freq, m[i]);
        }
        ll ops = 0;
        // auto key, val;
        for(auto &i:m){
            ll key = i.first, val = i.second;
            ll cnt = val;
            if(x!=0){
                cnt += m[key ^ x];
            }
            ll req = m[key ^ x];
            if(cnt>max_freq){
                max_freq = cnt;
                ops = req;
            }
            else{
                ops = min(ops, req);
            }
        }
        cout << max_freq << " " << ops << endl;
    }
    return 0;
}