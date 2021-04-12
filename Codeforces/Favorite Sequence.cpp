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
        cin >> n;
        vector<ll> a(n,0);
        for(auto &i:a){
            cin >> i;
        }
        vector<ll> ans(n,0);
        ll left = 0, right = n - 1;
        for (ll i = 0; i < n;i++){
            if(i%2){
                cout << a[right]<<" ";
                right--;
            }
            else{
                cout << a[left]<<" ";
                left++;    
            }
        }
        cout << endl;
    }
    return 0;
}