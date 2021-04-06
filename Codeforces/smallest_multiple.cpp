#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
ll power(ll x, ll y)  
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
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll y = power(b, c);
        ll x = power(a, y);
        cout << x << endl;
    }
    return 0;
}