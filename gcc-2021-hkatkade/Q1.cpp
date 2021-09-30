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
    // w(t)
    {
        ll n;
        cin >> n;
        ll p1 = ceil(n / 3)+1, p2 = floor(n / 3);
        ll ans = p1 + p2;
        cout << ans << "\n";
    }
    return 0;
}