#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
using namespace std;
int main()
{
    fastIO;
    ll n,x,curr_small_val=INT_MAX,curr_small_pos=0,k=0;
    cin >> n;
    vector<pair<ll,ll>> a;
    vector<ll> ans(n, 0);
    for (int i = 0; i < n;i++){
        cin >> x;
        a.push_back(make_pair(x, i+1));
    }
    for(auto &i:a){
        if(i.first<curr_small_val){
            a[k] = 0;
            curr_small_val = i.first;
            
        }
    }
    for (int i = 0; i < n;i++){
        cout << ans[i] << " ";
    }
    return 0;
}