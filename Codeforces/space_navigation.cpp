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
        ll px, py;
        string s;
        bool ver = true, hor = true;
        cin >> px >> py >> s;
        ll u = 0, d = 0, r = 0, l = 0;
        for(ll i=0;i<s.length();i++){
            if(s[i]=='U')
                u++;
            else if(s[i]=='L')
                l++;
            else if(s[i]=='R')
                r++;
            else
                d++;
        }
        if(px>0 && r>=px){
            hor = false;
        }
        if(px<0 && l>=-px){
            hor = false;
        }
        if(py>0 && u>=py){
            ver = false;
        }
        if(py<0 && d>=-py){
            ver = false;
        }
        cout<<((!ver && !hor)?"YES":"NO")<<"\n";
    }
    return 0;
}