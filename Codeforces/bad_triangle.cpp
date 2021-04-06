#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
int main()
{
    fastIO;
    w(t){
        ll n, a, b, c;
        cin >> n;
        vector<ll> s(n, 0);
        for(auto &i:s)
            cin >> i;
        if((s[0]+s[1])>s[n-1]){
            cout << -1 << "\n";
        }
        else{
            cout << 1 << " " << 2 << " " << n << "\n";
        }
    }
    return 0;
}