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
 
int main(){
    fastIO;
    // hk();
    ll n, x, sum = 0, suma = 0;
    cin >> n;
    vector<ll> a(n, 0);
    for (ll i = 0; i < n;i++){
        cin >> a[i];
        suma += a[i];
    }
    ll i = 0, ans = 0;
    cin >> x;
    sum = x % suma;
    ans = (x / suma) * n;
    ll sumx = 0;
    while(sumx+a[i]<=sum){
        sumx += a[i];
        i++;
        i = i % (n);
        ans++;
    }
    cout << ans+1;
    return 0;
}