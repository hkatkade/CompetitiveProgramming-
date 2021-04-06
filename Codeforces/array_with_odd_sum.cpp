#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,odd_c=0;
        cin>>n;
        vector<ll> a(n, 0);
        for (int i = 0; i < n;i++){
            cin >> a[i];
            if(a[i]%2)
                odd_c++;
        }
        if(odd_c==0 || (odd_c==n && n%2==0)){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }
    return 0;
}