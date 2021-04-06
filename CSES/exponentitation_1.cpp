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
    ll t;
    cin >> t;
    while(t--){
        
        ll a, b;
        cin >> a >> b;
        if(a==0 && b==0){
            cout << 1 << "\n";
            continue;
        }
        cout << power(a, b) << "\n";
    }
    return 0;
}