#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n, 0);
    for (ll i = 0; i < n;i++){
        cin >> a[i];
    }
    ll ans = 0;
    for (ll i = 1; i < n;i++){
        if(a[i]<a[i-1]){
            ans += abs(a[i] - a[i - 1]);
            a[i] = a[i - 1];
        }
    }
    cout << ans << "\n";
    return 0;
}