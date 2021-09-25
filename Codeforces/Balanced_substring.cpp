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
        string s;
        cin >> n >> s;
        bool ok = true;
        for (int i = 0; i < n-1;i++){
            if(s[i]!=s[i+1]){
                ok = false;
                cout << i + 1 << " " << i + 2 << endl;
                break;
            }
        }
        if(ok){
            cout << -1 << " " << -1 << endl;
        }
    }    
    return 0;
}