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
    w(t){
        ll n, mini = INT_MAX, maxi = INT_MIN;
        cin >> n;
        for (ll i = 0; i < n;i++){
            ll x;
            cin >> x;
            mini = min(mini, x);
            maxi = max(maxi, x);
        }
        cout << (maxi - mini) << endl;
    }    
    return 0;
}