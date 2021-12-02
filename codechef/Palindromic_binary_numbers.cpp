#include <bits/stdc++.h>  
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
void hk(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
}
ll nearestPowers(ll n){
    ll a = 1;
    while(a<=n){
        a = a * 2;
    }
    return a/2;
}
int main(){
    fastIO;
    hk();
    w(t){
        ll n;
        cin >> n;
        // cout<<nearestPowers(n)<<endl;
        while(n!=0){
            ll a = nearestPowers(n);
            cout << a << " ";
            n -= a;
        }
        cout << endl;
    }    
    return 0;
}