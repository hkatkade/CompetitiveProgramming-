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
        vector<ll> a(n, 0);
        unordered_set<ll> s;
        for (ll i = 0; i < n;i++){
            cin >> a[i];
            s.insert(a[i] - i);
        }
        if(s.size()==1){
            cout << n << "\n";
        }
        else{
            cout << 1 << "\n";
        }
    }
    return 0;
}
