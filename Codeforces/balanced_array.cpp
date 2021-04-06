#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        if(n*(n+1) > n*n ){
            cout<<"NO\n";
        }
        else{
            cout << "YES\n";
            for (ll i = 2; i <= n / 2;i+=2){
                cout << i << " ";
            }
            ll c = (n / 2)-1;
            ll i = 1;
            ll odd_sum=0;
            while(c--){
                odd_sum+=i
                cout << i << " ";
                i += 2;
            }
            cout << n * (n + 1) - odd_sum << "\n";
        }
    }
    return 0;
}