#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;
ll power(ll x, unsigned ll y)  
{
    ll res = 1;
    x = x % MOD;  
    if (x == 0) return 0;  
  
    while (y > 0)  
    {    
        if (y & 1)  
            res = (res*x) % MOD;   
        y = y>>1;   
        x = (x*x) % MOD;  
    }  
    return res;  
}  
int main()
{
    ll n;
    cin>>n;
    ll ans = power(2, n);
    cout << ans << "\n";
    return 0;
}