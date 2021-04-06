#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;
int main()
{
    ll n,x;
    cin >> n;
    set<ll> s;
    for (int i = 0; i < n;i++){
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << "\n";
    return 0;
}