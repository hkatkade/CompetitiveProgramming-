#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 100001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
vector<int> g[M];
int vis[M];
vector<int> par(2 * M, -1);
vector<int> ans(2 * M, 0);
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
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
int main()
{
    fastIO;
    ll n;
    cin >> n;
    vector<ll> a(n, 0);
    vector<ll> tree(M, 0);
    for (ll i = 0; i < n;i++){
        cin >> a[i];
    }
    buildTree(a, tree, 0, n-1, 1);
    for (int i = 1;i <=(2*n-1);i++){
        cout << tree[i] << " ";
    }
    return 0;
}
