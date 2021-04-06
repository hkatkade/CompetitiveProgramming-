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
        ll n, k;
        cin >> n >> k;
        string s(n, 'a');
        char c='b';
        if(k==1){
            char x='a';
            for(ll i=0;i<n;i++){
                cout<<x;
                x++;
                if(x>'c'){
                    x='a';
                }
            }
            cout << "\n";
            continue;
        }
        for (ll i = k; i < n;i++){
            s[i] = c;
            c++;
            if(c>'z'){
                c='b';
            }
        }
        cout << s << "\n";
    }
    return 0;
}