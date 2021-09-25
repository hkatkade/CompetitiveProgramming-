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
        ll n;
        cin >> n;
        vector<ll> a(n, 0);
        for(auto &i:a){
            cin >> i;
        }
        ll i = 0;
        sort(a);
        for (i = 0; i < n;i++){
            if(a[i]!=a[i+1]){
                break;
            }
        }
        cout << n - i - 1 << "\n";
     }    
    return 0;
}