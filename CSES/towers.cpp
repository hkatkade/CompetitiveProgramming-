#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define w(t) ll t;cin>>t;while(t--)
using namespace std;
int main()
{
    ll n,h;
    cin >> n;
    vector<ll> ans; 
    vector<ll> a;
    for (ll i = 0; i < n;i++){
        cin >> h;
        auto it = upper_bound(a.begin(), a.end(),h);
        if(it==a.end()){
            a.push_back(*it);
        }
        else{
            *it = h;
        }
    }
    cout << a.size();
    return 0;
}   