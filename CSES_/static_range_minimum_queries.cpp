#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
vector<ll> seg(1000000, 0);
void hk(){
#ifndef ONLINE_JUDGE
    freopen("i8.txt", "r", stdin);
    freopen("o8.txt", "w", stdout);
#endif  
}
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
};
ll build(vector<ll> &a, vector<ll> &tree, ll start, ll end, ll ind)
{
    if(start==end){
        tree[ind]=a[start];
    }
    else{
        ll mid = (start + end) / 2;
        tree[ind] = min(build(a, tree, start, mid, 2 * ind), build(a, tree, mid + 1, end, 2 * ind + 1));
    }
    return tree[ind];
}
ll min_query(vector<ll> a,vector<ll> tree, ll start,ll end, ll l,ll r,ll ind ){
    if(l<=start && r>=end){
        return tree[ind];
    }
    if(l>end || start>r){
        return INT_MAX;
    }
    ll mid = (start + end) / 2;
    return min(min_query(a, tree, start, mid, l, r, 2 * ind), min_query(a, tree, mid + 1, end, l, r, 2 * ind + 1));
}
int main()
{
    //hk();
    fastIO;
    ll n, q, x, sum = 0;
    cin >> n >> q;
    vector<ll> tree(2 * n + 2, 0);
    vector<ll> a(n+1, 0);
    for (ll i = 0; i <n;i++){
        cin >> a[i];
    }
    build(a,tree,0,n-1,1);
    // for (ll i = 0; i <=2*n-1;i++){
    //     cout << tree[i] << " ";
    // }
    // cout << endl;
    ll l, r;
    for (ll i = 0; i < q;i++){
        cin >> l >> r;
        l--;
        r--;
        cout << min_query(a, tree, 0, n - 1, l, r, 1) << "\n";
    }
    return 0;
}