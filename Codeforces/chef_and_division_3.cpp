#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 100001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
int main()
{
    fastIO;
    w(t){
        ll n, k, d, sum = 0, ans=0;
        cin >> n >> k >> d;
        vector<ll> a(n, 0);
        for (ll i = 0; i < n;i++){
            cin >> a[i];
            sum += a[i];
        }
        ans = (sum / k);
        if(ans>=d){
            cout << d << endl;
        }
        else{
            cout << (ans) << endl;
        }
    }
    return 0;
}
