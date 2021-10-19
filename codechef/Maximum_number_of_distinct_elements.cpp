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
    cout << "asd\n";
    fastIO;
    hk();
    w(t){
        ll n;
        cin >> n;
        vector<ll> b(n, 0);
        for(auto &i:b){
            cin >> i;
        }
        unordered_map<ll, ll> m;
        for (ll i = 0; i < n;i++){
            if(b[i]==1){
                m[0]++;
                cout << 0 << " ";
            }
            else{
                ll a = b[i]--;
                while(m[a]>0){
                    b[i]--;
                }
                cout << b[i] << " ";
                m[b[i]]++;
            }
        }
    }    
    return 0;
}