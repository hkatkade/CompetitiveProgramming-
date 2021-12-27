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
    hk();
    w(t){
        ll n, l, r, k;
        cin >> n >> l >> r >> k;
        vector<ll> a(n, 0);
        for(auto &i:a){
            cin >> i;
        }
        sort(a);
        ll sum = 0, ans = 0;
        for (int i = 0; i < n;i++){
            if(sum+a[i]>k){
                break;
            }
            if(a[i]>=l && a[i]<=r){
                sum += a[i];
                ans++;  
            }
        }
        cout << ans << "\n";
    }    
    return 0;
}