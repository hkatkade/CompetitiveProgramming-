#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
using namespace std;
int main()
{
    fastIO;
    vector<ll> count(M, 0);
    for(ll i=1;i<=M;i++){
        for (ll j = i; j <= M;j+=i){
            count[j]++;
        }
    }
    w(t){
        ll n;
        cin >> n;
        cout << count[n] << '\n';
    }
    return 0;
}