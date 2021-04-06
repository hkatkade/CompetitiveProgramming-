#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,sum=0;
        cin >> n;
        for (ll i = 1; i <= (n/2) - 1;i++)
        {
            sum += pow(2, i);
        }
        sum += pow(2, n);
        for (ll i = n / 2; i <= n - 1;i++)
        {
            sum -= pow(2, i);
        }
        cout << sum << "\n";
    }
    return 0;
}