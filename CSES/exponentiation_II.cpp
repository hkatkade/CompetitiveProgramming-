#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define w(t) ll t;cin>>t;while(t--)
using namespace std;
ll power(ll x,ll y,ll M)
{
    ll res=1;
    x = x % M;
    while(y>0){
        if(y%2){
            res = (res * x) % M;
        }
        y /= 2;
        x = (x * x) % M;
    }
    return res;
}
int main()
{
    w(t){
        ll M = 1000000007;
        ll a, b, c,temp,ans=0;
        cin >> a >> b >> c;
        temp = power(b, c, M - 1);
        ans = power(a, temp, M);
        cout << ans << "\n";
    }
    return 0;
}   