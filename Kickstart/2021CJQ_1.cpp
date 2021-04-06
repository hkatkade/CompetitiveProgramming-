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
    ll x=1;
    w(t){
        ll n;
        cin >> n;
        vector<ll> a(n, 0);
        vector<ll> pos(n+1, 0);
        for (ll i = 0; i < n;i++){
            cin >> a[i];
            pos[a[i]] = i;
        }
        int k = 0;
        ll ans = 0,j;
        for (int i = 0; i < n-1;i++){
            k = 0;
            int min_val = INT_MAX;
            int min_pos = n-1;
            for (j = n-1; j >=i;j--){
                if(a[j]<min_val){
                    min_pos = j;
                    min_val = a[j];
                }
            }
            ans += (min_pos - i + 1);
            int beg = i, end = min_pos;
            while(beg<=end){
                int temp = a[beg];
                a[beg] = a[end];
                a[end] = temp;
                beg++;
                end--;
            }
        }
        cout << "Case #" << x << ": " << ans << "\n";
        x++;
    }
    return 0;
}
