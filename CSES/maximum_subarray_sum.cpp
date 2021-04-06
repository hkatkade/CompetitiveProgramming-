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
    ll maxtillthisindex = a[0];
    ll maxsofar = a[0];
    for (int i = 1; i < n;i++){
        maxtillthisindex = max(maxtillthisindex + a[i], a[i]);
        maxsofar = max(maxsofar, maxtillthisindex);
    }
    cout << maxsofar;
    return 0;
}