#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
ll seive(ll n){
    set<ll> s;
    bool a[n + 1];
    memset(a, true, sizeof(a));
    a[0] = false;
    a[1] = false;
    for (ll i = 2; i * i <= n;i++){
        if(a[i]==true){
            for (ll j = i * i; j <= n;j+=i){
                a[j] = false;
            }
        }
    }
    for (ll i = 0; i <= n;i++){
        if(a[i]==true){
            s.insert(i);
        }
    }
    return s.size();
}
int main()
{
    fastIO;
    w(t){
        ll n,ans=0,c01,c10,mask1=1,mask2=0,ans1=0,ans2=0;
        cin >> n >> c01 >> c10;
        vector<ll> a(n, 0);
        for (ll i = 0; i < n;i++){
            cin >> a[i];
        }
        for (ll i = 0; i < n-1;i++)
        {
            if(a[i]==a[i+1] && a[i]==1){
                a[i + 1] = 0;
                ans1 += c01;
            }
            if(a[i]==a[i+1] && a[i]==0){
                
            }
        }
        cout << min(ans1, ans2) << "\n";
    }
    return 0;
}