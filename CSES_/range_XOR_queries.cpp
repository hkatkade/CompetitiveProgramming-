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
ll build_XOR(vector<ll> &a, vector<ll> &tree, ll start, ll end, ll ind)
{
    if(start==end){
        tree[ind]=a[start];
    }
    else{
        ll mid = (start + end) / 2;
        tree[ind] = (build_XOR(a, tree, start, mid, 2 * ind) ^ build_XOR(a, tree, mid + 1, end, 2 * ind + 1));
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
void buildTree(vector<ll>& a,vector<ll>& tree,ll start,ll end,ll ind){
    if(start==end){
        tree[ind] = a[start];
        return;
    }
    ll mid = ((start + end) / 2);
    buildTree(a, tree, start, mid, 2 * ind);
    buildTree(a, tree, mid + 1, end, (2 * ind) + 1);
    tree[ind] = tree[2 * ind] + tree[(2 * ind) + 1];
}
void updateTree(vector<ll>& a,vector<ll>& tree,ll start,ll end,ll diff,ll k,ll ind){
    if(k<start || k>end){
        return;
    }
    tree[ind] += diff;
    if(start!=end){
        ll mid = (start + end) / 2;
        updateTree(a, tree, start, mid, diff, k, 2 * ind);
        updateTree(a, tree, mid + 1, end, diff, k, 2 * ind + 1);
    }
}
ll get_XOR(vector<ll>& a,vector<ll>& tree,ll start,ll end,ll l,ll r,ll ind){
    if(r<start || l>end){
        return 0;
    }
    if(l<=start && r>=end){
        return tree[ind];
    }
    ll mid = (start + end) / 2;
    return (get_XOR(a, tree, start, mid, l, r, 2 * ind) ^ get_XOR(a, tree, mid + 1, end, l, r, 2 * ind + 1));
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
    build_XOR(a,tree,0,n-1,1);
    for (ll i = 0; i < q;i++){
        ll l, r;
        cin >> l >> r;
        cout << get_XOR(a, tree, 0, n - 1, l - 1, r - 1, 1) << endl;
        
    }
    return 0;
}