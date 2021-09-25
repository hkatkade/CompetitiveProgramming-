#include <bits/stdc++.h>  
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
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
        ll n;
        cin >> n;
        ll sum = 0, need = 0;
        vector<ll> a(n, 0);
        for (ll i = 0; i < n;i++){
            cin >> a[i];
        }
        bool ok = true;
        for (ll i = 0; i < n;i++){
            sum += a[i];
            need += i;
            if(sum<need){
                ok = false;
                cout << "NO\n";
                break;
            }
        }
        if(ok){
            cout << "YES\n";
        }
    }
    return 0;
}