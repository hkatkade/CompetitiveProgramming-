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
        vector<ll> a(n, 0), b(n, 0);
        for (ll i = 0; i < n;i++){
            cin >> a[i];
        }
        for (ll i = 0; i < n;i++){
            cin >> b[i];
        }
        ll and1 = a[0], and2 = b[0];
        for (ll i = 1; i < n;i++){
            and1 = max(and1 & a[i], and1 & b[i]);
            and2 = max(and2 & a[i], and2 & b[i]); 
        }
        cout << max(and1, and2) << "\n";
    }
    return 0;
}
