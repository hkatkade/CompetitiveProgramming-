#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
using namespace std;
ll power(ll x ,ll y, ll mod)  
{  
    ll res = 1;   
    x = x % mod;  
    if (x == 0)
        return 0; 
    while (y > 0)  
    {  
        if (y & 1)  
            res = (res*x) % mod;  
        y = y>>1;
        x = (x*x) % mod;  
    }  
    return res;  
}  
int main()
{
    fastIO;
    //w(t)
    {
        ll n,ans=0;
        cin >> n;
        for (ll i = 2; i <=sqrt(n);i++){
            if(n%i==0){
                if((n/i)==i){
                    ans += (i%MOD);
                }
                else{
                    ans += ((i % MOD) + ((n % MOD) * (power(i, MOD - 2, MOD) % MOD))) % MOD;
                }
            }
        }
        cout << ans+1;
    }
    return 0;
}