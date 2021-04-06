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
        ll a[n][n];
        memset(a,0,sizeof(a));
        for (int i = 0; i < n;i++){
            for (int j = 0; j < n;j++){
                    if (i == j)
                    {
                        a[i][j] = 1;
                    }
                if(i+j==n-1){
                    a[i][j] = 1;
                }
            }
        }
        if(n%2){
            a[(n / 2)-1][(n / 2)] = 1;
            a[(n / 2)][(n / 2) + 1] = 1;
        }
        for (int i = 0; i < n;i++){
            for (int j = 0; j < n;j++){
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}