#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, m, k, ans=0;
    cin >> n >> m >> k;
    vector<ll> a(m, 0);
    vector<ll> p(n, 0);
    for (int i = 0; i < n;i++){
        cin >> p[i];
    }
    for (int i = 0; i < m;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    sort(p.begin(), p.end());
    ll i = 0, j = 0;
    while (i < n && j < m){
        if(abs(a[j]-p[i])<=k){
            ans++;
            i++;
            j++;
        }
        else if(a[j]>p[i]){
            i++;
        }
        else{
            j++;
        }
    }
    cout << ans;
    return 0;
}