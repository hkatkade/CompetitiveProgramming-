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
    freopen("i.txt", "r", stdin);
    freopen("o.txt", "w", stdout);
#endif  
}
ll build_min(vector<ll> &a,  vector<ll> &tree, ll start, ll end, ll ind)
{
    if(start==end){
        tree[ind]=a[start];
        return tree[ind];
    }
    else{
        ll mid = (start + end) / 2;
        tree[ind] = min(build_min(a, tree, start, mid, 2 * ind), build_min(a, tree, mid + 1, end, 2 * ind + 1));
        return tree[ind];
    }
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
void updateTree(vector<ll>& a,vector<ll>& tree,ll start,ll end,ll u,ll k,ll ind){
    if(k<start || k>end){
        return;
    }
    if(start==end){
        tree[ind] = u;
        return;
    }
    ll mid = (start + end) / 2;
    updateTree(a, tree, start, mid, u, k, 2 * ind);
    updateTree(a, tree, mid + 1, end, u, k, 2 * ind + 1);
    tree[ind] = min(tree[2 * ind], tree[2 * ind + 1]);
}

int main()
{
    hk();
    fastIO;
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n + 1, 0);
    vector<ll> tree(2 * n + 2, 0);
    for (ll i = 0; i <n;i++){
        cin >> a[i];
    }
    build_min(a,tree,0,n-1,1);
    for (ll i = 0; i < q;i++){
        ll c;
        cin >> c;
        if(c==1){
            ll k, u;
            cin >> k >> u;
            updateTree(a, tree, 0, n - 1, u, k - 1, 1);
        }
        else{
            ll l, r;
            cin >> l >> r;
            cout << min_query(a, tree, 0, n - 1, l - 1, r - 1, 1) << endl;
        }
    }
    return 0;
}
