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
        ll n, time_p = 0,time_c=INT_MAX;
        cin >> n;
        vector<ll> a(n, 0);
        vector<ll> b(n, 0);
        for(auto &i:a)
            cin >> i;
        for(auto &i:b)
            cin >> i;
        sort(a);
        sort(b);
        
    }
    return 0;
}