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
    //w(t)
    {
        ll n, m ,j=0;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        vector<ll> p1, p2;
        for (ll i = 0; i < s.length();i++){
            if(s[i]==t[j]){
                j++;
                p1.push_back(i);
            }
            if(j==m){
                break;
            }
        }
        j = m-1;
        for (ll i = n - 1; i >= 0;i--){
            if(s[i]==t[j]){
                j--;
                p2.push_back(i);
            }
            if(j==-1){
                break;
            }
        }
        reverse(p2.begin(),p2.end());
        ll ans = INT_MIN;
        // for(int i=0;i<p1.size();i++){
        //     cout<<p1[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<p2.size();i++){
        //     cout<<p2[i]<<" ";
        // }
        // cout<<endl;
        for (ll i = 0; i < m - 1;i++){
            ans = max(p2[i + 1] - p1[i],ans);
        }
        cout << ans << "\n";
    }
    return 0;
}