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
        ll a, b, c;
        bool ok = true;
        cin >> a >> b >> c;
        for (ll i = a; i <= b;i++){
            if(i%c==0){
                ok = false;
                cout << i;
                break;
            }
        }
        if(ok)
            cout << -1;
    }    
    return 0;
}