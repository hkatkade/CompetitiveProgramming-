#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define w(t) ll t;cin>>t;while(t--)
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n, 0);
    for(auto &i:a){
        cin >> i;
    }
    sort(a.begin(), a.end());
    ll m=a[n/2],ans=0;
    for(auto &i:a){
        ans += abs(m - i);
    }
    cout << ans;
    return 0;
}