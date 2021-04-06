#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll smallest_divisor(ll n)
{
    if(n%2==0)
        return 2;

    for (int i = 3; i * i <= n;i+=2)
    {
        if(n%i==0){
            return i;
        }
    }
    return n;
} 
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        if(n%2==0){
            cout << n + (2 * k) << "\n";        
        }
        else{
            cout << n + 2 * (k - 1) + smallest_divisor(n) << "\n";
        }
    }
    return 0;
}