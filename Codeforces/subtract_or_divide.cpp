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
        ll n;
        cin >> n;
        bool prime[n + 1];
        memset(prime, true, sizeof(prime));
        prime[0] = false;
        prime[1] = false;
        ll num=0;
        for (ll i = 2; i <= n;i++){
            if(prime[i]){
                if(n%i==0){
                    num = i;
                    break;
                }
                for (ll j = i * i; j <= n;j+=i){
                    prime[i] = false;
                }
            }   
        }
        if(n==num){
            cout<<num-1<<"\n";
        }
        else{
            cout<<num<<"\n";
        }
    }
    return 0;
}