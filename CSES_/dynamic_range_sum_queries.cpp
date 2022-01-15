#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
vector<ll> seg(1000000, 0);
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
ll get_sum(vector<ll>& a,vector<ll>& tree,ll start,ll end,ll l,ll r,ll ind){
    if(r<start || l>end){
        return 0;
    }
    if(l<=start && r>=end){
        return tree[ind];
    }
    ll mid = (start + end) / 2;
    return (get_sum(a, tree, start, mid, l, r, 2 * ind) + get_sum(a, tree, mid + 1, end, l, r, 2 * ind + 1));
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
    buildTree(a,tree,0,n-1,1);
    for (ll i = 0; i < q;i++){
        ll c;
        cin >> c;
        if(c==1){
            ll k, u;
            cin >> k >> u;
            ll diff = u - a[k - 1];
            a[k - 1] = u;
            k--;
            updateTree(a, tree, 0, n - 1, diff, k, 1);
        }
        else{
            ll l, r;
            cin >> l >> r;
            l--, r--;
            cout << get_sum(a, tree, 0, n - 1, l, r, 1) << endl;
        }
    }
    return 0;
}