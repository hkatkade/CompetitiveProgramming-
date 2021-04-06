#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;
int main()
{
    ll n,total=0,ans=INT_MAX;
    cin >> n;
    vector<ll> a(n, 0);
    for (int i = 0; i < n;i++){
        cin >> a[i];
        total += a[i];
    }
    for (int i = 0; i < pow(2, n);i++){
        ll c = 0;
        for (int j = 0; j < n;j++){
            if(1<<j & i){
                c += a[j];
            }
            ans = min(ans,abs(total - 2 * c));
        }
    }
    cout << ans;
    return 0;
}