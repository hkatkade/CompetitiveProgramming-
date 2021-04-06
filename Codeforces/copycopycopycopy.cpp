#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,x;
        cin >> n;
        set<ll> s;
        for (int i = 0; i < n;i++){
            cin >> x;
            s.insert(x);
        }
        cout << s.size() << "\n";
    }
    return 0;
}