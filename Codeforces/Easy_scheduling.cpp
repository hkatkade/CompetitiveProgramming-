#include <bits/stdc++.h>  
#define ll long long int
#define lll long long 
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
        lll n, p;
        lll ans = 0;
        cin >> n >> p;
        for (lll i = 0; i < n;i++){
            ans += ceil(pow(2, i) / p);
            cout << ceil(pow(2, i) / p) << " ";
        }
        cout << endl;
        cout << ans << "\n";
    }    
    return 0;
}