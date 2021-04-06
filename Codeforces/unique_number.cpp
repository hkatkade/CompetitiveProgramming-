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
        ll sum=0,last=9;
        vector<ll> ans;
        while(last>0 && sum<n){
            ans.push_back(min(last, n - sum));
            sum += last;
            last--;
        }
        if(sum<n){
            cout<<-1<<"\n";
            continue;
        }
        reverse(ans.begin(), ans.end());
        for(auto &i:ans){
            cout << i;
        }
        cout << "\n";
    }
    return 0;
}